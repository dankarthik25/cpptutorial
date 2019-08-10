/*
 Copy Constructor :
    creating new obj is copied for existing obj

    When copy Constructor is used:
        1.passing obj by value as parameter
        2.return an obj from a function by value
        3. Copy one obj based on other of same class

    If we don't provid constructor c++ complier will provied copy constructor

    eg :
    void dispaly_play(Player P) // pass by value

    Player creatre_super_enemy(){
        ....    
        ....
        return an_enemy;
    }

    eg: Creating new obj from existing obj
    Player another_hero{hero};
 */

/*  
    How it work :
        copy memberwise copy.

    Disadvantages:
    If data is pointer then only pointer is copied,but not data where data is pointing.
    For pointer data we need DEEP COPY

    Best Practices
    Provide a copy constructor 
        when your class has raw pointer members
        With a const reference paramenters
        Use STL ('.' THEY ALREADY PROVIDE COPY CONSTRUCTOR)
        Avoid using raw pointer data members if possibles(insted use smart pointer)

    Syntax:
            Player (const Player &soucre); // prevent editing of obj

 */

#include <iostream>
#include <string>

using namespace std;
class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val){
        name = name_val;
    }
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}

    Player(string name_val="None", int xp_val=0,int health_val=0):name(name_val),xp(xp_val),health(health_val){
        cout<< "Constructor is used for Player : "<<name<<" Heath : "<<health<<" xp : "<<xp<<endl;
    }    
// COPY CONSTRUCTOR
    Player(const Player &source)
        :name{source.name},
         health{source.health},
         xp{source.xp}{
             cout<< "Copy Constructor is used for player : "<<name<<endl;
         }

    ~Player(){
        cout<<"Desturctor called for "<<name<<endl;
    }
    
};

void display_play( Player P){      // COPY CONSTRUCTOR IS USED TO CREATE P(Player Obj)
    cout<< " ------------Inside display---------"<<endl;
    cout<< "Name : "<< P.get_name()<<endl;
    cout<< "Health : "<<P.get_health()<<endl;
    cout<< "XP : "<<P.get_xp()<<endl;
    cout<< " ------------Outside display---------"<<endl;
}

int main(int argc, char const *argv[])
{
    Player frank{"Frank",100,4};
    Player empty;
    cout<<"Before display"<<endl;
    display_play(empty); 
    return 0;
}
