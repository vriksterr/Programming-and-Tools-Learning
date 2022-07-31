/*
    ****************************
    * Using Const with Classes *
    ****************************

    • Pass arguments to class member methods as const
    • We can also create const objects
    • What happens if we call member functions on const objects?
    • const-correctness

    For Example:

    •villain is a const object so its attributes cannot change

        const Player villain {"Villain", 100, 55};

    Example2:

    Q-What happens when we call member methods on a const object?
        
        const Player villain {"Villain", 100, 55};
        
        void display_player_name (const Player &p) {
            cout << p.get_name () << endl;
        }
        display_player name (villain);  //ERROR coz when we call p.get_name() in display_player_name function the this pointer isnt expectinng a const object so get name can potentially change the object, the conpiler is being very careful that a const object dosent loose its constness


    A- SO whats the solution to above problem

        We need to tell the compiler that specific methods will not modify the object and all we have to do is
        put a const modifier before the ; semicolen in the method prototype.

        class Player{
            prrvate:
                ...
            public:
                std::string get_name() const;   // Now the compiler will not only allow this method to be called on const objects it will also produce compiller error if we try to modify any of the attributes in the method
                ...
        };
    
    So NOW

        const Player villain {"Villain", 100, 55};

        villain.set_name ("Nice guy");    //ERROR

        std::cout << villain.get_name () << std::endl; // OK, but if we try to change within the get_name function we will get an error.

*/

// Const in Classes
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;  
public:
    std::string get_name() const {         // const method we have to add this coz the compiler thinks that the function could change the variables
        return name;
    }
    void set_name(std::string name_val)   {
        name = name_val;
    }
// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player {"None",0,0} {
}

Player::Player(std::string name_val) 
   : Player {name_val,0, 0}  {
}
  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
}

void display_player_name(const Player &p) {
    cout << p.get_name() << endl;
}

int main() {
    
    const Player villain {"Villain", 100, 55};    
    Player hero {"Hero", 100, 15};
    
    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;   
    
    display_player_name(villain);
    display_player_name(hero);

    
  
    return 0;
}

