
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

    cout<< score_ptr[0] <<endl;
    cout<< score_ptr[1]<<endl;
    cout<< score_ptr[2]<<endl;
    return 0;
}
