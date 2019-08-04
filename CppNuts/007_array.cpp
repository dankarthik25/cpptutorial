#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
/*
        declaration and inicialization
 */ 
    // int array[size]
    int test_scores[5]{100,95,99,87,88};
    int high_score_per_level[10]{3,5};
    const double days_in_year{365};
    int another_array[] {1,2,3,4,5};

/*
    Acessing the array elements
 */    
    for(int i=0;i<sizeof(test_scores)/sizeof(test_scores[0]);i++){
        cout<<"The "<<i<< " th Element in array is "<<test_scores[i]<<endl;;
    }
    cout <<"\n The value of test_score is "<<test_scores<<"(Starting Memory Address of the array )";
    // Characteristics
    // 1.fixed size (need to change the size in prg and re compile it ) 
    // 2.all elements are same size
    // 3.stored in contiguously in memory
    // 4.Individual elements can be accessed by the position or index

    // 5.No checking to see if you are out of bounds
    // 6.


    return 0;
}
