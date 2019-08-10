/*
    When a const obj is passed as argument to a function
    complier may n't work because it think fuction can modifiy the data.
 */

/*

const Player villain{"Villain",100,55};

void dislay_palyer_name(const Player  &p){
    cout<<p.get_name()<<endl;   // Error complier think get_name() may change 
}


display_player_name(villian); //Error ('.' of get_name)

Solution:
 class Player{
public :
    string get_name(); const; // Solution  This is also know as Const-Correctness tell complier 
                                // get_name is const member function
 }

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
    // Const with Constructor or Const-Correctness
    string get_name()const{return name;}
    
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

void display_play(const Player &P){      // COPY CONSTRUCTOR IS USED TO CREATE P(Player Obj)
    cout<< " ------------Inside display---------"<<endl;
    cout<< "Name : "<< P.get_name()<<endl;
    // cout<< "Health : "<<P.get_health()<<endl;
    // cout<< "XP : "<<P.get_xp()<<endl;
    cout<< " ------------Outside display---------"<<endl;
}

int main(int argc, char const *argv[])
{
    Player hero{"Hero",100,4};
    const Player villain{"Villain",100,55};
    
    display_play(villain); 
    return 0;
}
