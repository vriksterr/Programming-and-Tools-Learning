/*

    ***************************
    * The Default Constructor *
    ***************************
    If we do not provide any constructors at all c++ compiler  will define a constructors by default and all the name xp and health are initialized before enter the { }
        - we can provide a constructor with no arguments, one arguments, 2 or more arguments and when we create an object in main() based
          on the arguments compiler will choose the same constructor accordingly.
        - Default constructor is no longer compiler-generated once another constructor is declared
        
    • Does not expect any arguments
        • Also called the no-args constructor
    • If your write no constructors at all for a class
        • C++ will generate a Default Constructor that does nothing
    • Called when you instantiate a new object with no arguments
        Player frank; 
        Player *enemy = new Player;

*/

// Default Constructors
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
    void set_name(std::string name_val, int a) { 
        name = name_val; 
    }
    std::string get_name() {
        return name;
    }
    Player() {
        name = "None";
        health = 100;
        xp = 3;
    }
    Player(std::string name_val, int health_val, int xp_val) {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
    
};

int main() {
    Player hero;                        //will use line 40
    Player frank {"Frank", 100, 13};    //will use line 45
    frank.set_name("Frank", {5});
    cout << frank.get_name() << endl;
    return 0;
}

