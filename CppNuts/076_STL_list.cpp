

#include<list>
#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l1 {1,2,3,4,5};
    auto it = find(l1.begin(),l1.end(),3);
    l1.insert(it,10);
    l1.erase(it);
    l1.resize(2);

    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it++;



    return 0;
}
