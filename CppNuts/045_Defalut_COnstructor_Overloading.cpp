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
    string get_name(){
        return name;
    }
    // Overloaded Constructor
    Player(string name_val="None", int xp_val=0,int health_val=0):name(name_val),xp(xp_val),health(health_val){
        cout<< "Player : "<<name<<" Heath : "<<health<<" xp : "<<xp<<endl;
    }    
    ~Player(){
        cout<<"Desturctor called for "<<name<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Player slayer;
    slayer.set_name("Slayer");
    Player frank{"Frank",100,4};
    // cout<<"Frank player name is  "<<frank.get_name()<<endl;
    Player *enemy = new Player {"Enemy", 1000,40};
    // enemy->set_name("Enemy");

    delete enemy;
    return 0;
}
