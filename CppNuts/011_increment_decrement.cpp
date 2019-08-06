#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int counter{10}, results{0};
    cout<< "Counter : "<<counter<<endl; //10


    ;
    cout<< "counter++ : "<<counter++<<endl;//10
    cout<< "counter : "<<counter<<endl; //11
    ++counter;
    cout<< "++counter : "<<counter<<endl;//12
    cout<< "counter : "<<counter<<endl;//12
    return 0;
}
