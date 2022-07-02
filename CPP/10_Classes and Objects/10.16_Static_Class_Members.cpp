/*

    ************************
    * Static Class Members *
    ************************
    
    •Class data members can be declared as static
        • A single data member that belongs to the class, not the objects 
        • Useful to store class-wide information
    
    • Class functions can be declared as static
        • Independent of any objects 
        • Can be called using the class name

    • static functions only has access to static variables
*/

// Static class members
#include <iostream>
#include "Player.hpp"

using namespace std;

void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    display_active_players();
    Player hero{"Hero"};
    display_active_players();
    
    {
        Player frank{"Frank"};
        display_active_players();
    }
    display_active_players();
    
    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players();
    delete enemy;
    display_active_players();    



    return 0;
}

