/*
 * set (associate container)
 * implemented as balance binary tree or hashsets
 * set,un orderd set, mulit_set, unorded set.
 * 
 * 
 * 
 */


#include<set>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s { 4,1,1,2,3,4,5,6};
    cout<<s.size();
    cout<<s.max_size();
    s.insert(7);

    auto it = s.find(5);
    if(it!= s.end())
        s.erase(it);
    int num =s.count(1);
    cout<<num;

    return 0;
}
