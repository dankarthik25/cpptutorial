/*
            SCOPE
    Block scope : eg  function paramenters,
    Local scope : inside block
    Static scope : var is preserved between function calls
    Global Scope : through out program
 */

#include <iostream>

using namespace std;

int num{500};

void local_scope_eg(){
    int num{10000};
    cout<<"Local Scope num = "<< num<<endl;
}
void static_scope_eg(){
    static int num{50000}; // num is precerved means static_scope function stores num value even after calling the function
    cout<< "Static scope num = " << num<<endl;
    num +=1000;
}

void global_scope_eg(){
    cout<<"The Global value of num = "<<num<<endl;
}
int main(int argc, char const *argv[])
{
    int num{100},num2{509};{
        int num{200};
        cout<<"Inside Block num = "<<num<<endl;
    }
    cout<<"Outside Block num = "<<num<<endl;
    local_scope_eg();
    static_scope_eg();
    global_scope_eg();
    static_scope_eg();
    return 0;
}
