#include <iostream>
#include <string>

using namespace std;

template <typename T, int N>
class Array{
    int size{N};
    T value[N];
public:
    friend ostream &operator<<(ostream &os, const Array<T,N> &arr){
        os << "[";
        for (const auto &val:arr.value)
            os<< val<<" ";
        os<<"]"<<endl;
        os<<"The size of nums is :"<<arr.get_size()<<endl;

        return os;
    }

    Array() {
    }
    Array(T init_val){
        for( auto &item:value)
            item = init_val;
    }
    void fill(T val){
        for(auto &item:value)
            for(auto &item:value)
                item = val;
    }
    int get_size() const {
        return size;
    }
    T &operator[] (T index){
        return value[index];
    }
};



int main(int argc, char const *argv[])
{
    Array<int, 5> nums;
    cout<<nums<<endl;
    nums.fill(0);
    cout<<nums<<endl;

    nums.fill(10);
    cout<<nums<<endl;

    nums[0] = 1000;
    nums[4] = 2000;
    cout<<nums<<endl;

    Array<double,100> nums2{1};
    cout<<nums2<<endl;

    Array<string,10> List{"Add Items to List"};
    cout<<List<<endl;
    return 0;
}