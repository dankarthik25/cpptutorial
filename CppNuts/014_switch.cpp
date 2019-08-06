#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
 char grade{};
 cout<< "Enter the letter grade you expect on the exam :";
 cin>> grade;   
switch (grade){
    case 'a': // code to be executed if n = 1;
    case 'A':
        cout<< "You need a 90 or above,study hard!"<<endl;
        break;
    case 'b': // code to be executed if n = 1;
    case 'B':
        cout<< "You need a 80 or above,study hard!"<<endl;

        break;
    default: // code to be executed if n doesn't match any cases
        cout<< "Not a grade of a and b"<<endl;
    }
    return 0;
}
