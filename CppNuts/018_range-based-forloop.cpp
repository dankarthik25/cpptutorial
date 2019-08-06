/*
        Range based for loop: C++11

    for(var_type var_name: sequence){
        statement;
    }


 */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int scores[] {100,90,97};

    for (int score : scores){
        cout<< score <<endl;
    }
    cout << "======= auto ======="<<endl;
    for (auto score : scores){
        cout << score <<endl;
    }

    vector <double> temps {87.2,55.2,77.4,80.0,72,56};
    double average_temp{},running_sum{};

    for (auto temp: temps){
        running_sum +=temp;
    }
    average_temp += running_sum /temps.size();
    cout<<fixed<<setprecision(1);
    cout<< average_temp<<endl;

    /*
            C-type string
     */
    for (auto c:"This is a test")
        cout<<c<<endl;
    return 0;
}
