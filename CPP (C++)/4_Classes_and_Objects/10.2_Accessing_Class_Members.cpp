/*

    ***************************
    * Accessing Class Members *
    ***************************
    - We can access
        - class attributes
        - class methods
    - Some class members will not be accessible (more on that later)
    - We need an object to access instance variables

     _____________________________________
    | if we have an object (dot operator) |
    |_____________________________________|

        . Using the dot operator

        Account frank_account;
        frank_account.balance;
        frank_account.deposit(1000.00);

     ________________________________________________________________
    | If we have a pointer to an object (member of pointer operator) |
    |________________________________________________________________|
    
    • Dereference the pointer then use the dot operator.

        Account *frank_account = new Account ();
        (*frank_account).balance; 
        (*frank_account).deposit (1000.00);
    
    • Or use the member of pointer operator (arrow operator)
        
        Account *frank account = new Account ();
        frank account->balance; 
        frank_account->deposit (1000.00);

*/
// Accessing Class Members
#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health;
    int xp;
    
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;  }
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl; return balance; }
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl; return balance;  }
    
};

int main() {
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;     // same as (*enemy) where we are dereferencing but here -> dose the same and makes it easy to type less
    
    enemy->talk("I will destroy you!");
    


    return 0;
}

