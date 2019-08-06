#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref(int &num){
    num = 1000;
    cout<<num<<endl;
}

void pass_by_ref2(string &s){
    s = "Change";
    cout<<s<<endl;
}

void pass_by_ref3(vector <string> &v){
    v.clear();// = "ADFADSFADS";
    cout << "v is clear"<<endl;
}

void pass_by_ref4(const vector <string> &v){
    for(auto element : v){
        cout<<element<< " ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int num{10}, another_num{20};
    pass_by_ref(num);
    string name{"Frank"};
    pass_by_ref2(name);
   vector <string> stooges{"Larry", "Moe", "Curly"};

    pass_by_ref4(stooges);
    cout<< name<<endl;
     pass_by_ref3(stooges);

    return 0;
}
