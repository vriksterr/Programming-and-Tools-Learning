/*

    ********************************
    * Constructors and Destructors *
    ********************************
    If you provide no constructors and no destructors C++ compiler will automatically provide a default constructor and destructor which are empty
     ______________
    | Constructors |
    |______________|

    • Special member method
    • Invoked during object creation
    • Useful for initialization
    • Will have same name as the class
    • No return type is specified (They cannot return values and do not have return types)
    • Can be overloaded
    • We cannot refer to their address
    • Constructors can have default arguments
    • Should be declared in public section of the class so other can use it too
    • Constructors are automatically invoked whenever the object is created look at 10.5.1_Constructor_Example.cpp

    class Player{
        
        private:
            std::string name; 
            int health;
            int xp; 
        public:
            // Overloaded Constructors 
            Player();                                       // no argument constructor
            Player (std::string name);                      // single standard string as argument
            Player (std::string name, int health, int xp)   // excepts 3 arguments
    };

     _____________
    | Destructors |
    |_____________|

    • Special member method
    • Same name as the class proceeded with a tilde (~)
    • Invoked automatically when an object is destroyed
    • No return type and no parameters
    • Only 1 destructor is allowed per class - cannot be overloaded! coz compiler wont know which one to call
    • Useful to release memory and other resources

    class Player{
        
        private:
            std::string name; int health;
            int xp; 
        public:
            Player(); 
            Player (std::string name); 
            Player (std::string name, int health, int xp); 
            // Destructor 
            ~Player();          //this will be called automatically when a local object goes out of scope or we delete a pointer to an object
};

*/

// Constructors and Destructors
// Watch the 008 Constructor and Destructor for Degub mode understanding of whow and what is happning 
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
    void set_name(std::string name_val) { 
        name = name_val; 
    }
    // Overloaded Constructors which are implemented between {}
    Player() {                                          //this will be called when there is no information provided for initialization
        cout << "No args constructor called"<< endl;
    }
    Player(std::string name) {                          //this will be called when provided 1 string as initialization
        cout << "String arg constructor called"<< endl;
    }
    Player(std::string name, int health, int xp) {      //this will be called when provided 1 string & 2 int as initialization
        cout << "Three args constructor called"<< endl; 
    }
    ~Player() {                                         //when object is destroyed this distructor is called
        cout << "Destructor called for " << name << endl; //and what ever code we provide in the distructors will be executed before objects are distroyed
    }
};

int main() {
    // as all of these objects are local objects so they will be created on stack so when the block ends these objects go out of scope and there distructors will be called automatically so looking at below a total of 4 distructors will be called
    {
        Player slayer;              // as no initialization information is provided then just line 75 is called and slayer is a player object which is local to {} and will be created on stack part of memory
        slayer.set_name("Slayer");
    }//as slayer is part of the {} scope so when the program goes out of scope the distructor will be called ||right after the above line the distructor for Player is called which is line 84
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12); // as it has 1 string  2 int so line 81 will be called
                                            // we can use {} as well instead of () as parantheses check for narrowing and is Direct-list-initialization more on this is here https://en.cppreference.com/w/cpp/language/list_initialization
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    (*enemy).set_name("car"); //it can also be written like this as well or like the above way as well
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;       // destructor called for enemy
    delete level_boss;  // destructor called for boss
    
    return 0;
}