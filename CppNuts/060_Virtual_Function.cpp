/*
    Virtual Function

    Redefined functions are bound statically
    Overridden functions are bound dynamicall
    Virtual Function are overridden
    Allow us to treat all obj generally as objects of Base Class


Declare Virtual Functions 
    Declare function you want to overrides as virtual Base class
    Virtual function are virtual all the way down  the hierarchy from this point
    Dynamic Ploymorphism only via Account class pointer or reference.

Syantax :

class Checking : public Account{
    public:
        virtual void withdraw(double amount);
};

note in general c++ binding is static only by pointer or reference we are dynamicall bound.

 */

#include <iostream>

using namespace std;

class Account{
public:
    virtual void withdraw(double amount){
        cout<< "In Account :: withdraw"<<endl;
    }
};

class Checking: public Account {
    virtual void withdraw(double amount){
        cout<< "In Checking :: withdraw"<<endl;
    }
};

class Saving: public Account {
    virtual void withdraw(double amount){
        cout<< "In Saving :: withdraw"<<endl;
    }
};

class Trust: public Account {
    virtual void withdraw(double amount){
        cout<< "In Trust :: withdraw"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    cout<<"\n =======Pointer==========="<<endl;
    Account *p1 = new Account();
    Account *p2 = new Saving();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout<<"\n ============Clean Up ==============="<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}
