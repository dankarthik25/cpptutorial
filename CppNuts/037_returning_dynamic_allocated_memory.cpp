#include <iostream>
using namespace std;
/*
    NEVER RETURN A POINTER FROM LOCAL VARIABLE

    EG:
    int *function(){
        int size{0};
        ......
        return &size;
    }

    int *function(){
        int size{};
        int *int_ptr{&size};
        ....
        return int_ptr;
    }

    In both examples : 
        when function terminate (or) end of function call 
        the stack is pop means. The address(pointner) which pointer is pointing is cleared.
        This may cause un-know error.
 */
int *create_array(size_t size,int inical_val = 0){
    int *new_storage{nullptr};

    new_storage = new int[size];

    for (int i{0}; i<size;i++){
        *(new_storage +1) = inical_val;
    }
    cout<<endl;
    for (int i = 0;i<size;i++)
        cout<< *(new_storage+1)<<", ";
    cout<<endl;
    return new_storage;

}
int main(int argc, char const *argv[])
{   
    int *new_array{create_array(9,810)};
    
    delete [] new_array;
    return 0;
}
