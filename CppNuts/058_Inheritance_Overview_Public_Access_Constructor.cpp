/*
        INHERITANCE

    Provides method for creating new class from existing class

        contain data and behaviour of existing class
        allow reuse of existing class
        allow us to focus on common attributes amongs a set of class
        Allow new class to modify behaviors of existing class to make a unique
            Note : without changing original code.

eg: 

    Player, enemy, level Boss, Hero , Super Players
    Account, Saving Account, Checking Accout, Trust Account
    Shape, Line, Oval, Circle, Square....etc
    Person, Employee, Students, Faculty, Staff, Administration....etc.

 */ 

/* Eg:

class Account{
    //balance, deposit, withdraw,....

class Saving Account: public Account {
    // interest rate,.....

class Checking Accout:public Account{
    // minimum balance,per check fee,...etc

class Trust Account: public Account{
    //intrest rate,donation


 */

/*
Terminology:
Base Class (parent class, super class)

Derived CLass (child class, sub class)

"Is-A" relationship
    Public inheritance
    Derived Classes are sub-class of Base Classes
    Can use a derived class object 

Generailzation:
    Combining similar class into a single,more general class based on common attribues

Specialization
    Creating new classes from existing classes proving more spe

Syantax :

Class Base{
    //Base class
};
class Derived: access-specifier Base{
    // Drived class members

access-specifier:
public :
    Most common inherinatce
    is-a
Pirivate : 
    has-a, estiblishes "derived class has a base class" relationship
    

};

 */
#include <string>
#include <iostream>
using namespace std;

class Account
{
public:
    double balance;
    string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account(string name_value,double balance_val);
    Account();
    ~Account();

};

Account::Account(string name_val,double balance_val):balance{balance_val},name{name_val}
{
}

Account::Account():balance{0.0},name{"Unknow"}
{
}

void Account:: deposit(double amount){
    balance +=  amount;
    cout<< "Account Name :"<<name<<endl;
    cout<<"Accout deposit call with "<<amount <<endl;
    cout<<"Total Balance : "<<balance<<endl;

}

void Account:: withdraw(double amount){
    if(balance>amount){
        balance -= amount;
        cout<< "Account withdraw called with "<< amount <<endl;
        cout<<"Total Balance : "<<balance<<endl;
    }
    else{
        cout<<"In-sufficient Balance, your balance is low "<<endl;
    }    
}

Account::~Account()
{
}

class SavingAccount : public Account
{
public:
    double interest_rate;
    SavingAccount();
    SavingAccount(string name_val,double balance_val,double intrest_val);
    // void deposit(double amount);
    // void withdraw(double amount);
    ~SavingAccount();
};

SavingAccount::SavingAccount(string name_val,double balance_val,double intrest_val)
    :interest_rate{intrest_val},Account(name_val, balance_val){}

SavingAccount::SavingAccount(/* args */)
{}
// void SavingAccount:: deposit(double amount){
//     cout<<"Accout deposit call with "<<amount <<endl;
// }
// void SavingAccount::withdraw(double amount){
//     cout<< "Account withdraw called with "<< amount <<endl;
// }

SavingAccount::~SavingAccount()
{
}

int main(int argc, char const *argv[])
{
    cout<< "\n ====== Account======================= "<<endl;
    Account acc{"Student_acc",1000};
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    cout<<endl;

    Account *p_acc{nullptr};
    p_acc = new Account("Studens_acc_pt",2000);
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    cout<<"\n=====Saving Account=================="<<endl;
    SavingAccount sav_acc{"My_Saving",3000,.2};

    sav_acc.deposit(2000.000);
    sav_acc.withdraw(500.0);

    cout<< endl;


    SavingAccount *p_sav_acc{nullptr};
    p_sav_acc = new SavingAccount("SBI_Saving",1500,0.3);
    p_sav_acc->deposit(10000.00);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    cout<< "\n======================================"<<endl;
    return 0;
}
