/*
            Overloading Function 

    function having diffrent parameter list or type for same function name
    eg: print(int a),print(double b),print(string ).....etc


 */

#include <iostream>

using namespace std;


int add_number(int a, int b){
    return a +b;
}

double add_number(double a, double b){
    return a+b;
}

int main(int argc, char const *argv[])
{
    int a{1},b{2};
    double c{1.5},d{4.7};
    cout<< add_number(a,b)<<" and "<<add_number(c,d)<<endl;
    return 0;
}
