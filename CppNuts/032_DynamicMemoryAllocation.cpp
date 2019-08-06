/*
            Dynamic Memory Allocation
    Why ?:
        Does not know how much storage  we need at run time
        allocate storage for a variable at run time
    Why Pointers ?
        Need to use pointer to access newly allocated heap storage

    Dynamic Memeory :
    syntax : new 
    eg: 
        int *int_ptr{nullptr}; 
        int_ptr = new int;
        *int_ptr = 100;

    Memory leak :

    Consider you created a Dynamic Memory using int_ptr as above but 
    If we loss the pointer becasue of scope or assigning other value
        Then we will loos the only way to accessing  the memory this is 
        called memory leak  
    
    Dellocating the memory:
    
    syntax : delete int_ptr;
 */

/* *****************************************************
            Array Dynamic Memory Allocation
creating array using heap
 *******************************************************/ 
/* 
Points :
    value of an array name is address of first element
    *array_name is (value stored in 0th element)
    *(array_name +1) is value stored in 1st element in array
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout<< int_ptr <<endl;
    delete int_ptr;

    size_t size{0};
    cout<< "The size of array need to be created"<<endl;
    cin>>size;

    double *temp_ptr;
    temp_ptr = new double[size];
    cout<<"address stored in  of temp_ptr = "<< temp_ptr<<"\nValue is *temp_ptr = "<< *temp_ptr<<endl;

    delete [] temp_ptr;
    /*
    eg: memory leak
     */

    // while(true)
    //     temp_ptr = new double[size]; // we are createing heap and reassinging it's acess address in temp_ptr
    //                                 // which create memory leak

    return 0;
}

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     return 0;
// }
