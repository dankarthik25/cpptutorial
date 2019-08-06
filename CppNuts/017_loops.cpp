#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
            Type of Loop:
            1. for loop
            2. range-based for loop
            3. while
            4. do-while 
     */
    for (int i{0}; i<5; i++){
        cout<< "i="<<i<<endl;
    }
    int j{0};
    for (;j<5;){
        cout << "j=" <<j<<endl;
        j++;
    }
    int k{0};
    for (;;){
        cout<<"k="<<k<<endl;
        if(k>5){break;}
        k++;
    }
    /*
                Comma operator in for loop : 
        associativity is right to left.
     */
    cout<<"============Comma Operator in for loop==========" ;
    for(int k{1},l{5};k<5;++k,++l){
        cout<<k<<"*"<<l<<" : "<<(k*l)<<endl;
    }
    return 0;
}
