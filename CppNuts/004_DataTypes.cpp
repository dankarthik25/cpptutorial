#include <iostream>
using namespace std;

int main() {
/**************************
 * char
 * ****************************/
        //char
        // char16_t : 16 bits
    //    char name = 'J';
        // char32_t : 32 bits
    // wchar_t  : represents large available  chara set
    
    // int 
unsigned short int exam_score{55};
cout << "Exam Score"<<exam_score<<endl;

int countries_represented{65};
cout<< "Countries Represented"<< countries_represented<<endl;

long people_in_florida{20610000};
cout<< "People in Florida "<<people_in_florida<<endl;

long people_in_earth{760000000000000000};// c+=14 complier 7'600'000'000 
cout<<"People in earth "<<people_in_earth<<endl;

//botth sign and unsign
//unsigned short int        : 16 bits
//unsigned int              : 16 bits
//unsigned long int         : 32 bits  
//unsigned long long int    : 64 bits

// float

//float         7 decimal digits
    float pi{3.14159};
    cout<<"Pi is "<<pi<<endl;

    double pi2{314159265.3589793238462643383279502884197169399375105820974944592307816406286208998628034825}; 
    cout<< "Pi is "<< pi2<<endl;
//double       15 decimal digits
//long double  19 decimal digits   

// boolen type    

//bool
    bool gameOver{false};
    cout << "The value of game Over is "<<gameOver<<endl;
/* 
 *    OVERFLOW Example 
 */
short value1{300000};
short value2{100000}; 
short product{value1*value2};
cout << "THE sum of Value1 "<<value1<< "and "<< value2<< "is " <<product <<endl;

}