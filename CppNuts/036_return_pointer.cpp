/*
        RETURN A POINTER
    
    syantax : type *function()....

 */

#include <iostream>
using namespace std;

int *largest_int(int *int_ptr1, int *int_ptr2){
    if(*int_ptr1 > *int_ptr2)
        return int_ptr1;
    else
        return int_ptr2;    
}

int main(int argc, char const *argv[])
{
    int x{10},y{11};
    // int *max{nullptr};max = largest_int(&x,&y);cout<< max<<endl;
    int max{0};max = *largest_int(&x,&y);cout<< max<<endl;
    return 0;
}
