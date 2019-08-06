#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a{10}, b{20};
    int score{92}, result{};

    cout << ((a > b)? a:b) <<endl;
    cout <<( (a < b) ? (b-a):(a-b))<<endl;
    cout<< ((b!=0)? (a/b):0)<<endl;
    return 0;
}
