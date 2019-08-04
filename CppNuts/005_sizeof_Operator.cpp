#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"============================"<<endl;
    cout<<"size information"<<endl;
    cout<<"char : "<<sizeof(char)<<endl;
    cout<<"int : "<<sizeof(int)<<endl;
    cout<<"unsigned int : "<<sizeof(unsigned int)<<endl;
    cout<<"short : "<<sizeof(short)<<endl;
    cout<<"long : "<<sizeof(long)<<endl;
    cout<<"long long : "<<sizeof(long long)<<endl;
    cout<<"============================"<<endl;

    cout<<"float : "<<sizeof(float)<<endl;
    cout<< "double :"<<sizeof(double)<<endl;
    cout<< "long double : "<<sizeof(long double)<<endl;
    return 0;
}
