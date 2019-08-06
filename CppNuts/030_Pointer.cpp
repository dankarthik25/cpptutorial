#include <iostream>
using namespace std;

/*  
        Pointer
    syntax : variable_type * pointer_name;

    Inicialize : IN c++ we  should always inicalize pointer variable
                 or we have garbage data (memory addresss), 

    syntax:
            variable_type * pointer_name{nullptr C++11}
 */

int main(){
    int num{10};
    // Accessing address
    cout<<"Address of Operator of num is (&num)= "<< &num <<endl;    

    //  Pointer (inicializatoin)

    int *p;
    double *  q;
    cout<<"value inside pointer is p = "<< p<<"Which is garbage address"<<endl;
    cout<<"Address of pointer is "<< &p<<endl;
    cout<<"Size of p and q is "<< sizeof(p)<<" and "<<sizeof(q)<<endl;
    cout<<"Size of *p is size of int  "<< sizeof(*p)<<endl;
        cout<<"Size of *q is size of double  "<< sizeof(*q)<<endl;
    p = nullptr;
    cout<< p<<endl;

    return 0;
}