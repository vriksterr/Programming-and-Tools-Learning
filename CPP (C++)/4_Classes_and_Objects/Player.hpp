#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
   static int num_players;  //C++ forbids in-class initialization of non-const static members as static only belong to the class not to any objects
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
    ~Player();
    
    static int get_num_players();
    
};

#endif // _PLAYER_H_
