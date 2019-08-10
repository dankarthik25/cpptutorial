#include <iostream>
#include <string>
#include <vector>

using namespace std;

void double_data(int *int_ptr){
    *int_ptr = *int_ptr *2;
}

void swap(int *a_ptr, int*b_ptr){
    // SWAP by value
    int temp{*a_ptr};
    *a_ptr = *b_ptr;
    *b_ptr = temp;
}
void display (const  vector<string> *v){
    for(auto i : *v){
        cout<<i<<", ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    int value{10},*int_ptr{nullptr};
    double_data(&value);
    cout<< value <<endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout<< *int_ptr <<endl;
    /*  
            SWAP by pointetr
     */
    
    int x{100},y{200};
    cout<< x<<","<<y<<endl;
    swap(&x,&y);
    cout<< x<<","<<y<<endl;

    vector <string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    return 0;
}
