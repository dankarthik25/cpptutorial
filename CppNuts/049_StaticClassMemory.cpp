/*
    STATIC CLASS MEMOORY
        static data member : belongs to the class,not obj
        usefull to store class-wide info : eg: No of obj created.....etc
    
        class function can be static
        Independent of objects

        synatx

        Class Player{
            private:
                static int num_player;
            public:
                static int get_num_player(): //static method as only acess to static data-members.
        }
 */

#include <iostream>

using namespace std;

class Player
{
private:
    static int num_player;
    string name;
    int health;
    int xp;
public:
    static int get_num_player(){return num_player;}

    Player(string name_val="None", int xp_val=0,int health_val=0):name(name_val),xp(xp_val),health(health_val)
    {++num_player;}    

    ~Player()
    {--num_player;}
};
int Player::num_player =0;

void display_active_players(){      // COPY CONSTRUCTOR IS USED TO CREATE P(Player Obj)
    cout<< "Active Players :"<<Player::get_num_player()<<endl;
}



int main(int argc, char const *argv[])
{
    display_active_players();
    {
        Player obj{"Frank",10,2};
        display_active_players();
    }
    display_active_players();
    return 0;
}
