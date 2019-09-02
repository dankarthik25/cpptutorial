/*
 *      STL : ARRAY add in C++11
 * 
 * Fixed size ( size must be know at compile time)
 * Direct elements access  (fixed time indepentend of size of container)
 * Provides acess to underlying raw array
 * all iterators  availables. 
 * 
 */


#include <iostream>
#include <array>

using namespace std;


void display(const array<int,5> &arr){
    cout<<"[ ";
    for (const auto &i:arr)
        cout<<i<<" ";
    cout<<"]"<<endl;
}
int main(int argc, char const *argv[])
{
    std::array<int,5> arr1{{1,2,3,4,5}};//C++11 stylel
    std::array<int,5> arr2{1,2,3,7,5};//C++14 stylel
    display(arr1);
    display(arr2);
    cout<<arr1.size()<<endl;
    cout<<arr1.front()<< arr1.back()<<endl;
    arr1.swap(arr2);
    display(arr1);
    display(arr2);
    cout<<arr1.empty()<<endl;
    // cout<<arr1.fill(0)<<endl;

    return 0;
}
