/*

    ********************************
    * Class Member Access Modifers *
    ********************************

    public, private, and protected 
    
    • public
        • accessible everywhere
    • private
        • accessible only by members or friends of the class
    • protected
        • used with inheritance - we'll talk about it in the next section
    
*/

// Access Modifers
#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health;
    int xp;
public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;  }
    bool is_dead();
};

int main() {
    Player frank;
  //  frank.name = "Frank";     // Compiler Error coz no access
  //  cout << frank.health << endl;     // Compiler Error coz no access
    frank.talk("Hello there");    
    return 0;
}