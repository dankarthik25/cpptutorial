/*
 *
 * Generic Programming :
 *          Write code works with variety of types as argument
 *          As long as those arg types meet specific syntactic, semantic requirement.
 * 
 * Macros (**beware**)
 * 
 * Function template
 * 
 * Class templates
 */

/*
 *      MACROS (#define)
 * 
 * C++ preprocessor directives
 * No type information
 * Simple substitution
 * 
 * Eg : #define SQUARE(a)  ((a)*(a)) 
 * 
 * 
 * What is C++ Template : A template is a generic blueprint that a complier to generate 
 *                          specalized class and functions.
 * 
 * 
 * 
 */

// template <typename T>
// T max(T a, T b){
//     return (a>b)?a:b;
// }

/*
 *      Many times complier will deduce type and template paramerete are not neeed
 * eg: max<double>(c,d)
 *     max(c,d)
 * 
 * we can almost use any type 
 * 
 * But for own  class or structu's : we need to overlaod the opertor
 * 
 * 
 */

#include <iostream>
#include <string>

using namespace std;

template <typename T>
T min1(T a, T b){
    return (a<b)?a:b;
}
struct Person
{
    string name;
    int age;
    bool operator<( const Person &rhs) const{
        return this->age < rhs.age;
    }
};
ostream &operator << (ostream &os,const Person &obj) {
    os<< "\nPerson Name : "<<obj.name<<"\nAge :"<<obj.age<<"\n-------------------------";
    return os; 
}

template<typename T1, typename T2>
void func(T1 a, T2 b){
    cout<<a<<" "<< b<<endl;
}


int main(int argc, char const *argv[])
{
    cout<< min1<int>(2,3)<<endl;
    cout<< min1(2,3)<<endl;
    cout<< min1("a","A")<<endl;
    cout<< min1(2.5,3.4)<<endl;

    func<int,int>(10,20);
    func(10,20);
    func(10.4,"A");

    Person p1{"Curly",30};
    Person p2{"Moe",20};
    Person p3 = min1(p1,p2);
    cout<< p3.name<<" is yonger "<<endl; 
    func(p1,p2);
    return 0;
}
