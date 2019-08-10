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
    Player(){
        //Default consturctor
        name = "None";
        health = 100;
        xp = 2;
        cout<<"No arg constuctor called"<<endl;
    }
    Player(string name_val):name(name_val){ 
        cout << "String agr constructor calledf with string "<<name<<endl;   
    }
    Player(string name, int xp,int health):name(name),xp(xp),health(health){
        cout<< "Arg are name = "<<name<<", health = "<<health<<" xp = "<<xp<<endl;
    }
    ~Player(){
        // Destrtuctor is usfull for pointer data when Obj is deleted then
        // we can also delete data by as given below 

        // Data can be given as 
        // ClassName(int d){
                // int data  = new int;
                // data = *d;
        // } 
        // ~ClassName(){
            // delete data
        }
        cout<<"Desturctor called for "<<name<<endl ;
    }
};
int main(int argc, char const *argv[])
{
    Player slayer;
    slayer.set_name("Slayer");
    Player frank{"Frank",100,4};
    // cout<<"Frank player name is  "<<frank.get_name()<<endl;
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    cout<<"player name is  "<<enemy->get_name()<<endl;

    delete enemy;
    return 0;
}
