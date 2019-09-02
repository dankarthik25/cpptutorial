/*
        Virtual Destructors

    Problem can happen when we destroy polymorphic objects

    If a derived class is destroyed by deleting its storage via the  base class pointer and the class a non-virtual destructor.
    Thne the behavior is  undefined in C++ standard.

    Derived objects must be destroyed in correct order starting at the correct destructor
 */
#include <iostream>

using namespace std;


class Base{
public:
    virtual void fun(){cout<<"Base fun"<<endl;}
    Base(){cout<< " Base Constructor "<< endl;}
    virtual ~Base(){cout<<"Base Destructor"<<endl;}
};

class Derived: public Base {
public:
    virtual void fun(){cout<<"Derived fun"<<endl;}
    Derived(){cout<<"Derived Constructor"<<endl;}
    ~Derived(){cout<<"Derived Destructor"<<endl;}
};
int main(int argc, char const *argv[])
{   
    cout<<"===============Creating pointer for Base and Derived Class"<<endl;
    Base *b1 = new Base();
    Base *b2 = new Derived();

    cout<<"=============Calling a Virtual function "<<endl;
    b1->fun();
    b2->fun();

    cout<<"=================Clearning up code"<<endl;
    delete b1;
    delete b2;

    return 0;
}

