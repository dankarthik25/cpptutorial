#include <iostream>
using namespace std;
int main() {
//    int age;
//    Inicialization
//1 )   int age=21; // C-like initialization
//2 )   int age(21) // Constructor inicialliztion
//3 )   int age{21} // c11+ list inicialliation syntax
// c11+ is prefered
    
    int age{0};
    cout<<"age="<<age<<endl;
// Example for c11+ list inicializtion
    int room_width{0},room_length{0};
    cout << "Enter room width and length"<<endl;
    cin >> room_width>> room_length;
    cout << "Area of the room is"<< room_width*room_length <<endl;
    
// Cin and Cout
//    int data, data2;
//    cin>>data>>data2;
//    // Error if input 10.5 >> data =10, data2 =0.5
//    cout<<"data="<<data<<" "<<"data2="<<data2<<endl;
//    std::cout << "5 Hello, World!"<<endl;
    return 0;
}