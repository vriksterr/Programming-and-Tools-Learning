/*

    ********************************************
    * Constructor Parameter and Default Values *
    ********************************************

    • Can often simplify our code and reduce the number of overloaded constructors where one constructor
      can be used by various other objects with different number of attributes now remember that 
      different number is going to be suppoted by the max defined parameters

    • Same rules apply as we learned with non-member functions


*/
// Section 13
// Default Constructor Parameters
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

    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);   // one constructor for all the objects with different parameters count
  //  Player() {}    // Will cause a compiler error coz the compiler will get confused which one to choose coz empty object will fit for both but compiler cannot choose both just 1 unique that fits the object perfectly.
};

  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;
}


int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
   
    return 0;
}