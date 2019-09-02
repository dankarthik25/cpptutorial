/*
 * Shared Ptr:
 *              Provides Share Ownership of heap obj
 * 
 *  Properties 
 *      Point to an object of type T on heap
 *      There can be many shared Ptr pointing to same obj on heap
 *      Establishes : shared owership relationship
 *      Can be assigned, copied and move(from unique ptr)
 *      Doesn't support managing array by default
 *      When to Destroy ptr : when count{No.of Shared Pr} zero, then Obj on heap is destroyed
 *          Disadvangaes: Increase overhead but advantags are more.
 * 
 * 
 *{     // shared_ptr- creating, initializing and using
 * shared_ptr<int> p1 {new int{100}};
 * cout<<*p1<<endl;
 * *p1 = 200;
 * cout<<*p1<<endl;
 *} // automatically dellocated 
 * 
 *{     //No.of Shared Pointers "use_count" methods
 *  
 *  //      use_count
 * shared_ptr<int> p1 {new int{100}};
 * cout<<p1.use_count()<<endl;
 * 
 * shared_ptr<int> p2{p1};
 * cout<<p1.use_count()<<endl;
 * 
 * p1.reset(); //decrement the use_count;p1 is nulled out
 * cout<<p1.use_count()<<endl;
 * cout<<p2.use_count()<<endl;
 * 
 *} //automatically deleted
 *
 * 
 *      SHARED-PTR : USER DEFINED CLASSES
 * 
 * shared_ptr<Account> p1 = p1{new Account{"Larray"}};
 * cout<< *p1 <<endl;
 * 
 * p1->deposit(10000);
 * p1->withdraw(500);
 * 
 * // automatically deleted
 * 
 *      Vector and move
 * 
 * vector< shared_ptr<int> > vec;
 * shared_ptr<int> ptr {new int {100}};
 * vec.push_back(ptr);
 * cout<<ptr.use_cout()<<endl;
 * 
 * }    // automatically deleted.
 * 
 *      make_shared(C++11)
 * shared_ptr <int> p1  = make_shared<int> (1000);
 * shared_ptr <int> p2{p1};
 * shared_ptr <int> p3;
 * shared_ptr <int> p4 = p4{new int {108}};
 * p3 = p1; // assign 
 * // automatically deleted
 * 
 *      Using make_shared is more efficient! 
 *  3 Pointers 
 * 
 * 
 * 
 */

#include <iostream>
#include <memory>
#include <vector>
#include <string>

using namespace std;

class Test
{
private:
    int data;    
public:

    Test(int data_val):data{data_val}{ }
    Test(): Test{0}{}
    ~Test();
};


int main(int argc, char const *argv[])
{
    shared_ptr <int> p1  = make_shared<int> (1000); // make_shared is efficient than below iniciallization 
    // shared_ptr <int>  p1{ new int {1425}};
    cout<<"Use Count of p1 :" <<p1.use_count()<<endl;
    shared_ptr <int> p2{p1};
    cout<<"Use Count of p1 or p2 is " <<p1.use_count()<<" or "<<p2.use_count()<<endl;
    shared_ptr <int> p3;
    cout<<"Use Count of p3 is before sharing " <<p3.use_count()<<endl;
    p3 = p1; // assign 
    cout<<"Use Count of p3 after shared ptr is " <<p3.use_count()<<endl;
    p3.reset();
    cout<<"Use Count of p3 is after reset" <<p3.use_count()<<endl;
    cout<<"Use Count of p2 is " <<p2.use_count()<<endl;

        // VECTOR AND MOVES
    cout<<"The Vectors and sharepointers"<<endl;
    vector< shared_ptr<int> > vec;
    shared_ptr<int> ptr {new int {100}};
    auto ptr1 = make_shared<int>(500);
    auto ptr2 = make_shared<int>(9000);

    cout<<"The count of ptr before creating a vector : "<<ptr.use_count()<<endl;

    vec.push_back(ptr);
    vec.push_back(ptr1);
    vec.push_back(ptr2);

    cout<<"The count of ptr after creating a vector  : "<<ptr.use_count()<<endl;
    cout<< "Because vec created a copy of shared pointers :"<<endl;

    for(const auto &ptr_idx:vec){
    cout<<"For vec index value is : "<< *ptr_idx<<" "<< "Use count"<<ptr_idx.use_count()<<endl;  
    }

    // shared_ptr <Test> t1 = make_shared<Test>(1000);
    // shared_ptr<Test> t2 = t1;


    return 0;
}

