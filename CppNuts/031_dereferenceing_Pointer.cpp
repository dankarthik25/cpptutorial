#include <iostream>
#include <string>
#include <vector>
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
    // int score{100};
    // int *score_ptr{&score};

    // cout<< *score_ptr<<endl;
    // *score_ptr = 200;
    // cout<<"*score_ptr = "<<*score_ptr<<endl;
    // cout<<"score = "<<score<<endl;

    double high_temp{104.5},low_temp{45.5},*temp_ptr{nullptr};

    temp_ptr = &high_temp;
    cout<<*temp_ptr<<endl;
    temp_ptr = &low_temp;
    cout<<*temp_ptr<<endl;

    vector <string> stooges{"Larry","Moe", "Curly"};
    vector <string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    cout<< "1st Element in stooges by pointer is (*vector_ptr).at(0) is : "<<(*vector_ptr).at(0)<<(*vector_ptr)[0]<<endl;

    for (auto i : *vector_ptr)
        cout<<i<<", ";
    cout<<endl;
    return 0;
}