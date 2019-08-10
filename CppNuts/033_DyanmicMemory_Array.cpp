
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
    int score[] {100,83,95};

    cout << score    <<", " << *score <<endl;
    cout << score +1 <<", " << *(score +1)<<endl;
    cout << score +2 <<", " << *(score +2)<<endl;

    int *score_ptr{score};

    cout<<"0th element "<<score_ptr<<" value = "<<*(score_ptr)<<" or "<< score_ptr[0] <<endl;
    cout<<"1th element "<<score_ptr +1<<" value = "<<*(score_ptr+1)<<" or "<< score_ptr[1]<<endl;
    cout<<"2th element "<<score_ptr+2<<" value  = "<< *(score_ptr+2)<<" or "<<score_ptr[2]<<endl;

/*
Pointer arithmetic
assignment expressions ;
      ptr +1 (address + 1* size_variable )
Comparission expression:
        ptr1 == ptr2 // comparring address
increment/decrement
int_ptr++;
int_ptr--;
int_ptr = +n // int_ptr  = int_ptr + n*(sizeof(type))

Substracting two pointers (No.of elements btw pointers):
int n = int_ptr2 -int_ptr1;
 */

string s1{"Frank"};
string s2{"Frank"};

string *p1 {&s1};
string *p2 {&s2};
string *p3 {&s1};

cout << (p1==p2)<<endl;
cout<<(p1==p3)<<endl;

cout << (*p1==*p2)<<endl;
cout<<(*p1==*p3)<<endl;

return 0;
}
