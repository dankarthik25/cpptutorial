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
    cout<< "long double  : "<<sizeof(long double)<<endl;
    cout<<"============================"<<endl;
/*
        <Climits>
 */
    cout<< "Minimum value : " <<endl;
    cout<< "char : "<< WCHAR_MIN <<endl;
    cout<< "int8 : "<<INT8_MIN<<endl;
    // cout<< SHRT_MIN<<endl;
/*
        Operator sizeof
 */
    int age{21};
    cout<< "age is "<< sizeof(age)<<" bytes"<<endl;
    double wage{22.34};
    cout<<"wage is " << sizeof(wage)<< " bytes"<<endl;

    return 0;
}
