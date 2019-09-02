/*
 * A Library  of powerful(), reusable, adaptable, generic class, and functions
 * Implemented using C++ templates
 * Has : containers, alogorithum, iterations
 * Huge Library
 * 
 * 
 * Why use STl ?
 *      Assortment of commonly used containers
 *      Know time and size complexity
 *      Tried and tested - Reusablility
 *      Consistent, fast and type-safe
 *      Extensible
 * 
 * Elements of STL
 * Constainers :
 *      Collections of obj or primitive types: array, vectors, deques,stacks,set,maps,etc..
 * Algorithms :
 *      Functions of processing sequences of elements from containers
 *      (find, max, count, accumlate,sort, etc.)
 * Iterators :
 *      Generate sequences of elements from containers
 *      (forward,reverse, by value, reference, constant,etc)
 * 
 * Funtors :
 * 
 * Allocators .....etc  
 */

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{1,5,7};
    sort(v.begin(),v.end());
    cout<<"The sorted order is:  "<<endl;
    for (auto elem: v){
        cout<<elem <<",";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    cout<<"The reverse order is:  "<<endl;
    for (auto elem: v){
        cout<<elem <<",";
    }
    cout<<endl;

    int sum{};
    sum = std::accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;

    return 0;
}

/*  
 *  Types of Containers ;
 * 
 * Sequence containers : (maintain order in which it is created)
 *          array, vector, list, forward_list,deques
 * Associative containers : (insert in pre-defined or no-order)
 *          set, multi set, map, mulit maps
 * Containers adapters :  
 *          stack, queues, priorty queue
 *  
 * Types of Iterators
 * Input Iterators : from container to  program
 * Output Iterators: from program to containers
 * Forward iterators : naviage one item at a time in one direction
 * Bi-directional iterator : naviage one item at a time in both directoin
 * Random access iterators : directly access a continer items
 * 
 * Algorithms : 
 * 60 Algorithms in STL
 * Non-Modifying
 * Modifying 
 * 
 * 
 */