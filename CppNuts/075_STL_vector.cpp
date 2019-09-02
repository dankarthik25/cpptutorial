/*  
 * constant time
 * 
 * 
 */

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec1 {1,2,3,4,5,6};
    vector<int> vec2{10,20,30};
    auto it = find(vec1.begin(),vec1.end());
    vec1.insert(it,10);


    return 0;
}
