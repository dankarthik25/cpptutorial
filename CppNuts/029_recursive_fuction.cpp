/*
        Used : factorial, Fibonacci,factorial, honai tower
                search,sort,

    Use recuressive : 
        only if necessiary honoi tower...etc
        stack overflow error : 
            if recurssion fuction stack overflow may occure so which lead 
            stackoverflow
 */
#include <iostream>

using namespace std;

unsigned long factorial (unsigned int n){
    if(n==0)
        return 1;
    return n* factorial(n-1);
}

unsigned long fibonacci(unsigned int n){
    if(n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);   
}
int main(int argc, char const *argv[])
{
    
    for(int i{0};i<10;i++)
        cout<<i<<"! = "<< factorial(i)<<endl;
    cout<<endl;
    for (int i{0};i<10;i++)
        cout<< fibonacci(i)<<", ";
    cout<<endl;
    /* code */
    return 0;
}
