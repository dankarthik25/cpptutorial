/*
        Different Types of const and pointes
    Pointers to constants : address pointed by pointer is constant
                    const data_type *ptr{&var}
    Constant Pointers : address is constant which can't be changed.

    Cosntant Pointers to constants. address and data pointed in constant.

 */

  #include <iostream>
  using namespace std;
  int main(int argc, char const *argv[])
  {
      int high_score{100},low_score{64};
      // Pointer to constant
      const int *ptr2const_ptr{&high_score};
      cout<< ptr2const_ptr << ", "<<*ptr2const_ptr<<endl;
    
    // Can't change the value of pointer. but can change the address of pointer
    // usefull for function call like display, print, where data does't change.

    //   *ptr2const_ptr = 86; //ERROR assignment of read-only location * ptr2const_ptr
       ptr2const_ptr = &low_score;
       cout<< ptr2const_ptr << ", "<<*ptr2const_ptr<<endl;

    /*
        Const pointer (simillar to reference)
     */
      int  *const cosntptr_ptr{&high_score};

      cout<<cosntptr_ptr<<endl;
      *cosntptr_ptr = 89;
    //   cosntptr_ptr = &low_score; //ERROR assignment of read-only variable ‘cosntptr_ptr’
    cout<<* cosntptr_ptr<<endl;


    /*
        Const Pointer to Const
     */

    const int *const const_ptr2const{&low_score};
    // const_ptr2const = &high_score; // Error
    // *const_ptr2const = 87; // Error
      return 0;
  }
  