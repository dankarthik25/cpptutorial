/*
    Explicity Type Casting : static_cast<type>
 */

#include <iostream>

using namespace std;
        
int main(int argc, char const *argv[])
{
    int total_amount{10}, total_number{8};
    double average{0.0};

    average = int(total_amount/total_number);
    cout<< average << endl;

    average = static_cast<double> (total_amount)/total_number;// modern c++
    average =  (double) total_amount/total_number;// old style : 
    cout<< average<<endl;

    return 0;
}


