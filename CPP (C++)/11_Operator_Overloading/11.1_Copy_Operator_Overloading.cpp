/*

    *****************************
    * Copy Operator Overloading *
    *****************************

    Copy assignment operator (=).
    •C++ provides a default assignment operator used for assigning one object to another

        Mystring s1 {"Frank"}; 
        Mystring s2 = sl;    // NOT assignment it is Initialization
                             // same as Mystring s2{s1};
        s2 = sl;             // assignment as s2 has already been initialized and 
    • Default is memberwise assignment (shallow copy)
        • If we have raw pointer data member we must deep copy

     __________________________________________________
    | Copy assignment operator overloading (deep copy) |
    |__________________________________________________|

        Type &Type::operator=(const Type &rhs);

        Mystring &Mystring::operator=(const Mystring &rhs);

        s2=s1;              // we write this
        s2.operator=(s1);   //operator= method is called
*/
// Overloading copy assignment
#include <iostream>
#include <vector>
#include "11.1_Mystring.cpp"

using namespace std;

int main() {
    Mystring a {"Hello"};                // overloaded constructor
    Mystring b;                          // no-args contructor
    b = a;                               // copy assignment is what is happening
                                         // b = a gets converted to b.operator=(a) by the compiler
    b = "This is a test";                // b.operator=("This is a test");
  
    Mystring empty;                      // no-args constructor
    Mystring larry("Larry");             // overloaded constructor
    Mystring stooge {larry};             // copy constructor 
    Mystring stooges;                    // no-args constructor
    // remember that the left hand is calling the function and the right hand side passed in as parameter
    // and empty is returned by reference
    // and also empty is this when the copy assignment overloading is invoked
    empty = stooge;                     // copy assignment operator
    
    empty.display();                      // Larry : 5
    larry.display();                      // Larry : 5
    stooge.display();                     // Larry : 5
    empty.display();                      // Larry : 5
    
    stooges = "Larry, Moe, and Curly";  
    stooges.display();                    // Larry, Moe, and Curly : 21
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    cout << "=== Loop 1 ==================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();                                        // Larry
                                                            // Moe
                                                            //Curly
    cout << "=== Loop 2 ==================" << endl;
    for (Mystring &s: stooges_vec)
        s = "Changed";                              // copy assignment
        
    cout << "=== Loop 3 ================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();                                     // Changed
                                                         // Changed
                                                         // Changed
    
    return 0;
}

/*
The above programe without the headder files and cleaned a bit for simplicity

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Mystring
{
private:
    char *str;      // pointer to a char[] that holds a C-style string
public:

// No-args constructor
    Mystring() 
        : str{nullptr} {
        str = new char[1];
        *str = '\0';        
    }                     

// Overloaded constructor
    Mystring(const char *s) 
        : str {nullptr} {
            if (s==nullptr) {
                str = new char[1];
                *str = '\0';        
            } else {
                str = new char[std::strlen(s)+1];
                std::strcpy(str, s);
            }
        }                                     
    
// Copy constructor
    Mystring(const Mystring &source) 
        : str{nullptr} {
            str = new char[std::strlen(source.str) + 1];
            std::strcpy(str, source.str);
        }

    // Destructor
    ~Mystring() {
        delete [] str;
    }
                                                     
   // Copy assignment 
    Mystring &operator=(const Mystring &rhs){
        std::cout << "Copy assignment" << std::endl;
        if (this == &rhs)
            return *this;
        delete [] this->str;
        str = new char[std::strlen(rhs.str) + 1];
        std::strcpy(this->str, rhs.str);
        return *this;
    }

    // Display method
    void display() const{
        std::cout << str << " : " << get_length() << std::endl;
    }
    // getters
    int get_length() const{ return strlen(str); }                                      
    const char *get_str() const{ return str; }
};




int main() {
    Mystring a {"Hello"};                // overloaded constructor
    Mystring b;                             // no-args contructor
    b = a;                                      // copy assignment 
                                                  // b.operator=(a)
    b = "This is a test";                 // b.operator=("This is a test");
  
    Mystring empty;                      // no-args constructor
    Mystring larry("Larry");             // overloaded constructor
    Mystring stooge {larry};            // copy constructor 
    Mystring stooges;                   // no-args constructor
    
    empty = stooge;                     // copy assignment operator
    
    empty.display();                      // Larry : 5
    larry.display();                         // Larry : 5
    stooge.display();                     // Larry : 5
    empty.display();                      // Larry : 5
    
    stooges = "Larry, Moe, and Curly";  
    stooges.display();                              // Larry, Moe, and Curly : 21
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    cout << "=== Loop 1 ==================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();                                        // Larry
                                                                // Moe
                                                                //Curly
    cout << "=== Loop 2 ==================" << endl;
    for (Mystring &s: stooges_vec)
        s = "Changed";                              // copy assignment
        
    cout << "=== Loop 3 ================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();                                     // Changed
                                                            // Changed
                                                            // Changed
    
    return 0;
}
*/