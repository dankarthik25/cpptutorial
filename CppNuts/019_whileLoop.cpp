#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i{1};

    while(i<=5){
        cout<<i<<endl;
        ++i;
    }

    do
    {
        cout<<"Inside Do-while loop \n"<<i<<endl;
        /* code */
    } while (i<0);
    

    int num{};
    do{
        cout<< "Enter an integer between 1 and 5"<<endl;
        cin>> num;
    }while(num<1 or num>5);
    cout << num<<endl;
    return 0;
}
