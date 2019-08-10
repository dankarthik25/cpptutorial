/*
    Used in ragne-based for loop
 */

#include <vector>
#include <string>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    vector <string> stooges{"Larry", "Curly","Moe"};

    for (auto str : stooges)
        str = "Funny"; // str is a local variable inside loop change will not effect vector

    for(auto str : stooges){
        cout<<str<<", ";
    }
    cout<<endl;
    /********************************
     *      Access element in loop 
     ********************************/
    // for (auto &str : stooges)
    //     str = "Funny"; // 
    // for(auto str : stooges){
    //     cout<<str<<", ";
    // }
    // cout<<endl;


    /********************************
     *      Prevent writing a element in loop 
     ********************************/
    // for (auto const &str : stooges)
        // str = "Funny"; // Error
    cout<< "acessing element with const ref"<<endl;
    for(auto const &str : stooges){
        cout<<str<<", ";
    }
    cout<<endl;
    return 0;
}
