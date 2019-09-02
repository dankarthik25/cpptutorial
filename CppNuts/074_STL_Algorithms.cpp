/*
 * STL Algorithms : work on sequences of contaier elements provided to them by an iterator
 * 
 * STL has many common and useful algorithms
 * 
 * Too many to describes in this section :
 *      http://en.cppreference.com/w/cpp/algorithum
 * 
 * Many algorithum require extra information in order to do work
 *      Functor(function objects)
 *      Function pointers
 *      Lambda expression (C++11)
 * 
 * 
 * 
 * ITERATOR INVALIDATION
 *      iterator point to container elements
 *      It's possible iterators become invalid during processing
 *      
 *      Suppose we are iterating over a vector of 10 elements
 *              Eg: we clear() the vector while iterating  ? 
 *                      Wt happens ?
 *                          Undefined behaviour - our iterator are pointing  to invalid locations.
 * 
 * 
 * Example : algorithm - for_each 
 * 
 * for_each algoirthm applies a function to each  elements in iterator sequence
 * 
        * Functor (function obj)
        * Function pointers
        * Lambda expression (C++11)
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <cctype> // converting lower to upper

using namespace std;

class Person{
    string name;
    int age;
public:
    Person() = default;
    Person(string name, int age):name{name},age{age}{}
    bool operator< (const Person &rhs) const {
        return this->age <rhs.age;
    }
    bool operator== (const Person &rhs) const{
        return this->name == rhs.name && this->age==rhs.age;
    }

};
void find_test(){
    cout<< "\n =========Test============"<<endl;
    vector<int> vec{1,2,3,4,5};
    auto loc = find(begin(vec),end(vec),1);
    if(loc != end(vec))
        cout<<"Found the number : "<< *loc <<" in vector"<<endl;
    else
        cout<<"Not Found the number"<<endl;
    
    list<Person> player{{"Larry",18},{"Moe",20},{"Curly",21},{"Moe",20}};
    auto loc1 = find(player.begin(),player.end(),Person{"Moe",20});
    if(loc1 !=player.end())
        cout<<"Found Moe"<<endl;
    else
        cout<<"Moe not found"<<endl;

} 

void count_test(){
    cout<<"\n=========COUNT TEST========="<<endl;
    vector<int> vec{1,2,3,4,5,6,1,2,1};
    int num = count(vec.begin(),vec.end(),1);
    cout<< "Count of vec for element is : "<< num<<endl;
}

void count_if_test(){
    vector<int> vec{1,2,3,4,5,6,1,2,1};
    cout<<"\n ===============COUNT IF TEST+==========="<<endl;
    int num = count_if(vec.begin(),vec.end(),[](int x){return x%2==0;});
    cout<< num<< " even numbers found"<<endl;
    num = count_if(vec.begin(),vec.end(),[](int x){return x%2!=0;});
    cout<< num<< " odd numbers found"<<endl;
}

void string_transform_test(){
    cout<<"\n =============String Transform Test ==========="<<endl;
    string str1 {"This is test"};
    cout << "Before transform: "<<str1<<endl;
    std::transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    cout<< " After transform : "<<str1<<endl;
}
int main(int argc, char const *argv[])
{
    string_transform_test();
    // find_test();
    // count_if_test();
    return 0;
}


