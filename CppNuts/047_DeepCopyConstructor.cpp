/*
    Disadvantages of Copy Constructor (Shallow Copy):
        1.If data is pointer then only pointer is copied,but not data where data is pointing.
        2.For pointer data we need DEEP COPY
    
    How Deep Copy
    Insted of copying pointer we copy data pointed by pointer
    Each copy  will have unique storage in heap
    Each copy has raw pointer as class data members
 */

#include <iostream>

using namespace std;

class Deep{
private:
    int *data;
public:
    Deep(int d){
        data = new int;
        *data = d; // allocating storage
        cout<<"Deep Copy Constructor:   data "<<*data<<endl;
    }
    Deep(const Deep &source):Deep{*source.data} {}

    int get_data_value(){return *data;}
    void set_data_value(int d){ *data = d;}
    ~Deep(){
        cout<< "Destucted the dynamic data "<<*data<< endl;
        delete data;
    }
};

void display(Deep s){cout<< s.get_data_value()<<endl;}

int main(int argc, char const *argv[])
{
    Deep obj1{100};
    cout<< "======Before Calling Display========="<<endl;
    display(obj1);
    cout<< "======After Calling Display========="<<endl;
    obj1.set_data_value(1000);

    cout<<"DeepCopy  example"<<endl;
    Deep obj2{obj1};


    return 0;
}
