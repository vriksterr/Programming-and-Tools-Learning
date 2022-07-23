/*

    ***************************
    * Delegating Constructors *
    ***************************
    
    • Often the code for constructors is very similar
    • Duplicated code can lead to errors
    • C++ allows delegating constructors
        • code for one constructor can call another in the initialization list 
        • avoids duplicating code

______________________________________________________________________________________________________    
    -> Lets understand with an example:

    Player::Player ()
        : name { "None"}, health{0}, xp{0} {
    }
    
    Player::Player (std::string name val)
        : name {name_val}, health{0}, xp{0} {
    }
    
    Player::Player (std::string name_val, int health_val, int xp_val)
        : name {name_val}, health{health_val}, xp{xp_val} {
    }

    As you can see in the 3 constructors initializations list are very simillar the only differences
    are the values that are used to initialize these these constructor
______________________________________________________________________________________________________
    
    -> Lets see how we can clean the code a little bit using the delegating constructors

    Player::Player (std::string name_val, int health_val, int xp_val)
        : name{name_val}, health {health_val}, xp{xp_val} {
        }
   
    Player::Player ().
        : Player {"None", 0, 0} {       // we use delegation by typing the constructor name followed by the arguments to the constructor
        }                               // in this case the no args() constructor is the delegating constructor since it delegates the object initialization to the another constructor
                                        // which is same as typing this name{"None"}, health {0}, xp{0} but the no delegation method looks much cleaner to write and read.
    Player::Player (std::string name_val)
        : Player {name_val, 0, 0} {
        }

     ___________________________________________
    | Rules for using a delegation constructors |
    |___________________________________________|

    - we can only use delegation constructor in the initialization list we cannot call the other delecating constructors from the body like:
        Player() 
            { 
               Player{"",0,0}   //cannot do this inside the body it has to be next to the constructor after : thats the correct way
               
            }

    - we can have another delegating constructor inside the {}/() of a delegation like this :Player{ Player{"",0,0} } but i dont the reason to do this but you can if you find a specific need
    
    - also we cannot delecate to another constructor and provide initialization values to class members 
      meaning we cannot provide initialization values to other constructor via delegation
*/

// Delegating Constructors
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
// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);

};

Player::Player() 
    : Player {"None",0,0} {                     // use {} parentheses and not () curly read in https://stackoverflow.com/questions/33185543/delegating-constructors-in-c-or and https://en.cppreference.com/w/cpp/language/list_initialization and watch this https://www.youtube.com/watch?v=7DTlWPgX6zs&t=2014s
        cout << "No-args constructor" << endl;
}

Player::Player(std::string name_val) 
   : Player {name_val,0, 0}  {
           cout << "One-arg constructor" << endl;
}
  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;
}

int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}

