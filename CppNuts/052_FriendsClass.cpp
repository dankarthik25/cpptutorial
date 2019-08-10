/*
    Function or class has access to other class private members


    Friend must is granted 
    Friendship not symmetric, transitive

 */

 
//  friend void display_player(Player &p){
    // cout<< p.name <<endl;
    // cout<<p.health<<endl;
    // cout<<p.xp<<endl;

#include <iostream>
using namespace std;


class other_class{

public: 
    void display_player (Player &p){
        cout<< p.name<<endl;
        cout<<p.health<<endl;
        cout<<p.xp<<endl;
    }
};

class Player{
    friend void other_class::display_player(Player &p);
    // friend class other_class; all function in other class can acess the mem in Player
    string name;
    int health,xp;
};


int main(int argc, char const *argv[])
{
    
    return 0;
}
