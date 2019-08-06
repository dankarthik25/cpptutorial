#include <iostream>
#include <vector>
using namespace std;
/*
    Vector 
    1. Container in C++ Standard Template Library
    2. Dynamic array size
    3. Similar semantics and syntax as array
    4. Verry Efficient
    5. Provide Bounds checks
    6. inbuilt function like sort,reverse,find...etc

    default inicilizied to 0 in int type
 */

int main(int argc, char const *argv[])
{

    /*
        declaration and inicialization
 */
    // vector <int> test_scores(10); //inicaillied to 0
    vector<int> vowels{'a', 'e', 'i', 'o', 'u'};
    vector<double> hi_temperature(365, 80.0);

    vector<int> test_score{100, 95, 99}; //size 3
    /*
            Dynamic size
     */
    test_score.push_back(80);
    test_score.push_back(90);
    /*
            Access the element
     */

    cout << test_score.size() << endl;
    for (int i=0;i<test_score.size();i++){
        // cout<<test_score[i]<<", ";
        cout<< test_score.at(i)<<", ";
    }
    cout<<endl;

    /*
            Multi Dimiension  declaration,inicilization , acessing
     */
    vector<vector<int>> movie_rating {{0,4,3,5},{1,2,3,4},{5,4,4,5}};
    // Displaying the 2D vector
    for (int i = 0; i < movie_rating.size(); i++)
    {
        for (int j = 0; j < movie_rating[i].size(); j++)
            // cout << movie_rating[i][j] << " ";
            cout<< movie_rating.at(i).at(j)<<" ";
        cout << endl;
    }

    return 0;
}