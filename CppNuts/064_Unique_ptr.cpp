/*
 * 
 * 
 * Syantax:
 *  #include <memeory>
 * 
 * unique_ptr<Type-Object> 
 *      Point an object of Type on heap
 *      Unique - only one unique_ptr pointing to heap
 *      Owership: own's wt it's point to 
 *      Cann't be assigned or copied 
 *      Can be moved
 *      when ptr is destroyed => data it pointing to is also destroyed.
 * 
 * eg:
 * {
 *  unique_ptr<int> p1{new int {100}};
 *  cout << *p1 <<endl;     // 100
 *  *p1 = 200;
 *  cout << *p1<< endl;     //200
 * } // automatically delete heap data 200.
 * 
 * {
 * unique_ptr<Account> p1{new Account{"Larry"}};
 * cout<<*p1<<endl;
 * p1->deposit(1000);
 * p1->withdraw(500);
 * } // automatically deleted
 * 
 * 
 * {        // unique_ptr - vector and move
 * vector< unique_ptr<int> > vec;
 * unique_ptr <int> ptr {new int{100}};
 * vec.push_back(ptr);  // ERROR - COPY NOT ALLOWED
 * vec.push_back(move(ptr))
 * } // automatically deleted
 * 
 * { // make_unique (C++14)
 * unique_ptr<int>      p1 = make_unique<int>       (100);
 * unique_ptr<Account>  p2 = make_unique<Account>   ("Curly",5000);
 * auto                 p3 = make_unique<Player>    ("Hero",100,100);
 * } // automatically deleted
 * More Efficient -no calls to new or delete.
 * 
 *  
 */

#include <iostream>
#include <memory>
#include <vector>
#include <string>

using namespace std;


class Test{
private:
    int data;
public:
    Test(int data_val):data(data_val){cout<<"Test constuctor is " <<data<<endl;}
    Test(): Test(0){}
    int get_data() const { return data;}
    ~Test(){cout<< "Test Destrouctor is "<<data<<endl;} 
    void print(){cout<<"Data : "<<data<<endl;}
};

int main(int argc, char const *argv[])
{
    cout<<"==================Raw pointer==============="<<endl;
    Test *t1 = new Test{1000};
    delete t1;

    cout<<"========================Unique Pointer ==========="<<endl;
    std::unique_ptr<Test> t2{new Test{100}};
    std::unique_ptr<Test> t3 = std::make_unique<Test>(140);
    auto t4 = std::make_unique<Test>(499);

    cout<< " Unique Pointer are de-allocated automatically"<<endl;

    //ERROR: CAN'T COPY(ASSIGNMENT,copy().....etc), Assignment(=)
    unique_ptr<Test> t5; // Uniniciallized
    // t3 = t1; // ERROR CAN'T COPY.
    t5 = move(t2);
    if(!t2) // check  t2 is nullptr then it is false.
        cout<< "t2 is a nullptr "<<endl;
/*  
        VECTOR
 */
    vector< unique_ptr<Test> > accounts;

    accounts.push_back( make_unique<Test>(400));
    accounts.push_back( make_unique<Test>(500));
    accounts.push_back( make_unique<Test>(300));


    // for (const auto acc: accounts){ // ERROR : '.' acc create a copy of 
    for (const auto &acc: accounts){
        acc->print();
    }
        
/* 
            Polymorphisum 
 */
    // std::unique_ptr<Account> t3 = make_unique<Account>("Moe",500);
    // std::cout<<*a1 << std::endl;
    // a1->deposit(5000);
    // std::cout<<*a1<<std::endl;

    return 0;


}

