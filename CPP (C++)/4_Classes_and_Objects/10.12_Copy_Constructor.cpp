/*
    
    ********************
    * Copy Constryctor *
    ********************
    
    • A compiler provides 1 default copy constructor for each class if no constructor 
      is defined in that class
    • When objects are copied C++ must create a new object from an existing object
    • When is a copy of an object made?
        • passing object by value as a parameter 
        • returning an object from a function by value 
        • constructing one object based on another of the same class
    
    • C++ must have a way of accomplishing this so it provides a compiler-defined 
      copy constructor if you don't

    • If you don't provide your own way of copying objects by value then the compiler 
      provides a default way of copying objects
    
    • Copies the values of each data member to the new object
        • default memberwise copy
    • Perfectly fine in many cases
    
    • Beware if you have a pointer data member
        • Pointer will be copied 
        • Not what it is pointing to 
        • Shallow vs. Deep copy - more in the next video

     ________________________________________
    | Best practices to use copy constructor |
    |________________________________________|

    • Provide a copy constructor when your class has raw pointer members
    • Provide the copy constructor with a const reference parameter
    • Use STL classes as they already provide copy constructors
    • Avoid using raw pointer data members if possible


    Example1: // Pass object by-value (a copy is sent)

            Player hero {"Hero", 100, 20};
            
            void display_player (Player p) {
                // p is a COPY of hero in this example and is made with copy constructor
                // use p 
                // Destructor for p will be called as soon as function goes out of scope as p is local to the display_player function
            }
            display_player (hero);

    Example2:  // Return object by value

            Player enemy;   // object enemy id created of player class
            
            // A function where a new object is created and 
            Player create_super_enemy () {  
            Player an enemy{ "Super Enemy", 1000, 1000}; 
            return an enemy; // A COPY of an enemy is returned
            }
            enemy = create_super_enemy ();

    Example3:   //Construct one object based on another

            Player hero { "Hero", 100, 100};
            Player another_hero {hero};     // A COPY of hero is made


     ___________________________________________
    | Declaring/Implementing a Copy Constructor |
    |___________________________________________|

    Type: : Type (const Type &source);  // 1) its a constructor so it has the same name as class 2) we have a single object passed in and the same type 3) we pass that object as an reference and const(as it prevents any modification to the source object), if we pass in by value then we have to make a copy of it and thats the whole point of a copy constructor we would defete the purpose and end up with a never ending recurssive call
                                        //
    Player::Player (const Player &source);

    Account::Account (const Account &source);{
        // code or initialization list to copy the object
    }

    //Notice that we are initializing the newly created object attributes initializer list based on the source object attributes
    Player::Player (const Player &source) : name { source.name}, health {source.health}, xp {source.xp} 
    {
    
    }
*/

// Copy Constructor
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
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() {return xp; } 
   
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player() { cout << "Destructor called for: " << name << endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor for " + name << endl;
}

Player::Player(const Player &source)
   : name{source.name}, health{source.health}, xp{source.xp} {
    //    : Player {source.name, source.health, source.xp}  {
        cout << "Copy constructor - made copy of: " << source.name << endl; 
}

void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;    
}

int main() {    

    Player empty {"XXXXXX", 100, 50},empty2;
    
    Player my_new_object {empty};   //when we reach this line copy constructor is invoked, while looking at debugger my_new_object is not initialized yet so the compiler seen that a copy needs to be made so it moves to the copy constructor over there the name, health, xp get assigned empty object value those sames values are used to initialize the object my_new_object
    
    display_player(empty);  //same as above happnes here as well when object p is initialized the name,helth,xp value are already changed to new values and these values are used to initialize the object P
   
    empty2=empty; // now here the copy constructor is not invoked, copy constructor is only invoked when it is initializing like in empty example but in this case empty2 object is already initialized so we are just copying empty to empty2
    cout<<"Empty2 values: "<<empty2.get_name()<<endl;   //data will be same as empty but remember it is not assigned via copy constructor.
    
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
        
    return 0;
}


/*



*/ 