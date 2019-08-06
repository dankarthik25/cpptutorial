#include <iostream>

using namespace std;

const double  pi{3.14159};

double area(double radius){
    return pi * radius* radius;
}

int main(int argc, char const *argv[])
{
    double radius{4.5};
    cout<< "The area of circle is " << area(radius)<<endl;
    return 0;
}
