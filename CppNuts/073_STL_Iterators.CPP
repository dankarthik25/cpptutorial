/*
 * Iterators :
 *          Allow abstracting an arbitrary container as a seq of elements
 *          They are obj that work like pointers by design
 *          Most container classes can be traversed with iterators
 *          
 * 
 */

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

using namespace std;
void display(const vector<int> &vec){
    cout<<"[";
    for(auto const &element : vec)
        cout<< element<<" ";
    cout<<"]"<<endl;
}

void test1(){
    cout<< "\n ======================"<<endl;
    vector<int> nums1{1,2,3,4,5};
    auto it = nums1.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it = nums1.end()-1;
    cout<< *it<<endl;
}

void test2(){
    cout<< "\n ======================"<<endl;
    vector<int> nums1{1,2,3,4,5};
    vector<int> ::iterator it = nums1.begin();
    while (it != nums1.end() ){
        cout<<*it<<endl;
        it++;
    }

    // change all vector to 0
    it = nums1.begin();
    while(it !=nums1.end() ){
        *it = 0;
        it++;
    }
    display(nums1);
}
void test3(){
    cout<< "\n ==========TEST3============"<<endl;
    vector<int> nums1{1,2,3,4,5};
    vector<int>::const_iterator it1 = nums1.begin();

    while(it1 !=nums1.end()){
        cout<<*it1<<", ";
        // *it1 = 0; //  ERROR : because iterator is constant
        it1++;
    }
    display(nums1);

}

void test4(){
    cout<< "\n ==========TEST4============"<<endl;
    vector<int> nums1{1,2,3,4,5};
    auto  it1 = nums1.rbegin();
    cout<<"Display in reverse order"<<endl;
    while(it1 !=nums1.rend()){
    cout<<*it1<<", ";
    // *it1 = 0; //  ERROR : because iterator is constant
    it1++;
    }
    cout<<endl;
    cout<<"Display the vector :" <<endl;
    display(nums1);

    // list is Double-Linked List

    list<string> name  {"Larry","Moe","Curly"};
    auto it = name.begin();

    cout<< *it <<endl;
    it++;
    cout<< *it <<endl;

    map<string, string> favorites{{"Frank","C++"},{"Bill","Java"},{"James","Haskell"}};

    auto it3 = favorites.begin();
    while(it3 !=favorites.end()){
        cout<< it3->first<<" : "<<it3->second<<endl;
        it3++;
    }
}

void test5(){
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    auto start =vec.begin()+2;
    auto finish = vec.end();

    while(start != finish){
        cout<<*start;
        if(start < finish-1)
            cout<<", ";
        start++;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
    return 0;
}