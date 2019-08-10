/*
this or self used inside the class 

1. contain address to obj -so it's pointer to the obj
2. Only in class scope
3. All member access is done via this pointer
4. determin if two obj are same
5. dereference (*this) to yield current object.
 */
/*
eg :
    void set_balance(double balance){
        balance = balance ; // ambiguous
        this->balance = balance; 
    }
    compare_balance(const Account &other){
        if(this ==&other)
            cout<< ""
    }
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    return 0;
}

