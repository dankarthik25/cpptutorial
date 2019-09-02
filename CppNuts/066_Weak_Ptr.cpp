/*
 *  WEAK POINERS:
 * 
 * Provides : non-owning "weak" reference
 * 
 * weak_ptr<T>
 *      Point to an obj of Type T on heap
 *      Does not participate in owning relationship
 *      Always create from a shared_ptr
 *      Does NOT increase or decrement reference use count
 *      Used to prevent strong reference cycles which  could prevent obj from deleteed
 * 
 */

#include <iostream>
#include <memory>

using namespace std;

class B;

class A{
private:
    shared_ptr<B> b_ptr;
public:
    void set_B(shared_ptr<B> &b){
        b_ptr =b;}
    A(){cout<<"A class Constructor is called "<<endl;}
    ~A(){cout << "A class Destructor is called "<< endl;}
};


class B{
private:
    // shared_ptr<A> a_ptr; // Memory Leak Obj a,b are interlinked so can't be deleted.
    weak_ptr<A> a_ptr;
public:
    void set_A(shared_ptr<A> &a){
        a_ptr = a;
        }
    B(){cout<<"B class Constructor is called "<<endl;}
    ~B(){cout << "B class Destructor is called "<< endl;}
};

int main(int argc, char const *argv[])
{
    shared_ptr<A> a = make_shared<A> ();
    shared_ptr<B> b = make_shared<B> ();

    a->set_B(b);
    b->set_A(a);

    return 0;
}
