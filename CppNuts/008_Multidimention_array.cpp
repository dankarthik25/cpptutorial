#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
/*
        declaration and inicialization
 */ 
    const int rows{3},cols{4};
    // int movie_rating[rows][cols] {{0,4,3,5},{1,2,3,4},{5,4,4,5}};
    int movie_rating[][cols] {{0,4,3,5},{1,2,3,4},{5,4,4,5}};

/*
    Acessing the array elements
 */    
    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
                    // cout<<"The "<<i<< " th row "<<j<<" th col Element in array is "<<movie_rating[i][j]<<endl;;
                    cout<<movie_rating[i][j]<<",";
        }
        cout<<endl;
    }
    return 0;
}
