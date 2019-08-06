#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    enum Direction{ left,right,up,down};
    Direction heading{left};

    switch (heading){
        case left: 
            cout<< " Go Left"<<endl;
            break;
        case right:
            cout<< "Go Right"<<endl;
            break;
        case up:
            cout << "Go Up"<<endl;
            break;
        default:
            cout<< "Ok"<<endl;
    }
    return 0;
}
