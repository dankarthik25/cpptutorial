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
    // If user not create constructor then c++ will create it's own 
    // constructor 
    Player():name("None"),health(100),xp(2){
        cout<< "Player : "<<name<<" Heath : "<<health<<" xp : "<<xp<<endl;
        //Default consturctor
        // ASSIGNMENT ,NOT-INICIALIZATION LIST
        // name = "None";
        // health = 100;
        // xp = 2;
        // cout<<"No arg constuctor called"<<endl;

    }
    Player(string name_val):name(name_val),health(10),xp(10){ 
        cout<< "Player : "<<name<<" Heath : "<<health<<" xp : "<<xp<<endl;
    }
    Player(string name, int xp,int health):name(name),xp(xp),health(health){
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
    cout<<"player name is  "<<enemy->get_name()<<endl;

    delete enemy;
    return 0;
}
