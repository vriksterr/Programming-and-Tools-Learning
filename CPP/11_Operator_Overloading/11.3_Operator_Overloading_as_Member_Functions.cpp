/*

    *******************************************
    * Oprator Overloading as Member Functions *
    *******************************************

    Unary operators as member methods (++, --, -, !)

        ReturnType Type::operatorOp();

        Number Number::operator- () const; 
        Number Number::operator++ ();           //pre-increment
        Number Number::operator++ (int);        //post-increment
        bool Number::operator! () const;

        Number nl {100}; 
        Number n2 = -nl;                        //n1.operator-()
        n2 = ++nl;                              //n1.operator++()
        n2 = n1++;                              //n1.operator++(int)
*/
// watch video for understanding
// Overloading operators as member methods
#include <iostream>
#include "11.3z_Mystring.h"

using namespace std;

int main() {
    cout << boolalpha << endl;
    
    Mystring larry{"Larry"}; 
    Mystring moe{"Moe"};
    
    Mystring stooge = larry;
    larry.display();                                               // Larry
    moe.display();                                                 // Moe
    
    cout << (larry == moe) << endl;                                // false
    cout << (larry == stooge) << endl;                             // true

    larry.display();                                               // Larry
    Mystring larry2 = -larry;
    larry2.display();                                              // larry
     
    Mystring stooges = larry + "Moe";                              // ok with member function
    //Mystring stooges = "Larry" + moe;                            // Compiler error
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();      
                                                   // Moe Larry
    Mystring three_stooges = moe + " " + larry + " " +  "Curly";
    three_stooges.display();                                       //  Moe Larry Curly
    
    return 0;
}

