/*

    ****************************
    * Move Assignment Operator *
    ****************************

    Remember, the copy assignment operator that we just overloaded in the previous video works with l-value 
    references. The move operator that will overload in this section works with r-value references.
    Again, think temporary unnamed objects. This is more efficient that copy assignment.

    Move assignment operator (=)
    • You can choose to overload the move assignment operator
        • C++ will use the copy assignment operator if necessary
        
        Mystring sl;
        sl = Mystring {"Frank"}; // move assignment

        a mystring object s1 that's basically just an empty string. Now we assign the mystring object s1
        with the string frank to it. Notice that the mystring object initialized to frank must be constructed.
        And once it's constructed, it has no name, it's a temporary object. So it's an r-value.
        That means that when we assign it to s1, the move assignment operator will be called since we're
        providing an r-value reference.
    
    • If we have raw pointer we should overload the move assignment operator for efficiency

     _________________________________________
    | Move Assignment Operator Implementation |
    |_________________________________________|

        Type &Type:: operator= (Type &&rhs);

        Mystring &Mystring::operator= (Mystring &&rhs);

        sl = Mystring{"Joe"}; // move operator= called
        sl = "Frank";        // move operator= called

    How it is implemented:

        Mystring &Mystring::operator=(Mystring &&rhs) {

            if (this == &rhs)   // self assignment
            return *this;       // return current object
             
            delete [] str;      // deallocate current storage 
            str = rhs.str;      // steal the pointer
            
            rhs.str = nullptr;  // null out the rhs object
            
            return *this;       // return current object
        }
            
*/

// Overloading move constructor and move assignment operator
#include <iostream>
#include <vector>
#include "11.2_Mystring.h"

using namespace std;

int main() {
    
    Mystring a{"Hello"};                // Overloaded constructor
    a = Mystring{"Hola"};              // Overloaded constructor then move assignment
    a = "Bonjour";                         // Overloaded constructor then move assignment
    
 
    Mystring empty;                      // no-args constructor
    Mystring larry("Larry");             // overloaded constructor
    Mystring stooge {larry};            // copy constructor 
    Mystring stooges;                   // no-args constructor
    
    empty = stooge;                     // copy assignment operator
                                                  // stooge is an l-value
    
    empty = "Funny";                    // move assignment operator
                                                  // "Funny" is an r-value
    
    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    
    stooges = "Larry, Moe, and Curly";  
    stooges.display();
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");                // Move constructor
    stooges_vec.push_back("Moe");                // Move constructor
    stooges_vec.push_back("Curly");              // Move constructor    
    
    cout << "=== Loop 1 ==================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();
        
    cout << "=== Loop 2 ==================" << endl;
    for (Mystring &s: stooges_vec)
        s = "Changed";                                      // move assignment
        
    cout << "=== Loop 3 ==================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();
        
    
    return 0;
}