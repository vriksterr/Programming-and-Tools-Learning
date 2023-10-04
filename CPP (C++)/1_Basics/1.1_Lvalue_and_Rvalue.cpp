/*
    *********************
    * Lvalue and Rvalue *
    *********************
     ________
    | Lvalue |
    |________|
    In C++, an lvalue (left value) and an rvalue (right value) are two fundamental concepts related to expressions and the assignment of values.

    1. Lvalue (Left Value):
    An lvalue is an expression that refers to a memory location, typically an object or a variable, where you can assign a value. Lvalues represent 
    the left-hand side of an assignment operation, and they can appear on the left side of an assignment operator ('=') to receive a new value.

    Examples of lvalues:
    - Variables: `int x = 5;` (x is an lvalue)
    - Array elements: `int arr[5]; arr[2] = 10;` (arr[2] is an lvalue)
    - References: `int &ref = x;` (ref is an lvalue)

     ________
    | Rvalue |
    |________|
    An rvalue is an expression that represents a temporary or immediate value. Rvalues are typically used on the right side of an assignment operation 
    and cannot be assigned a new value directly. They represent values that can be used but not modified directly.

    Examples of rvalues:
    - Constants and literals: `int y = 42;` (42 is an rvalue)
    - Function return values: `int result = add(3, 4);` (add(3, 4) is an rvalue)
    - Expressions: `int z = x + y;` (x + y is an rvalue)

    In C++, the distinction between lvalues and rvalues is important, especially in the context of move semantics introduced in C++11 and in understanding 
    when and how values can be moved rather than copied for performance optimization. Rvalue references and `std::move()` are often used to work with rvalues efficiently.

    In summary, lvalues are expressions that represent memory locations where values can be stored or modified, while rvalues are expressions that represent 
    temporary values or values that can be used but not directly modified.


     ______________________________
    | Lvalue and Rvalue References |
    |______________________________|
    
    “l-value” refers to a memory location that identifies an object. “r-value” refers to the data 
    value that is stored at some address in memory. References in C++ are nothing but the 
    alternative to the already existing variable. They are declared using the ‘&’ before the name 
    of the variable.

    Uses of the lvalue references: 

    - lvalue references can be used to alias an existing object.
    - They can also be used to implement pass-by-reference semantics.

    Uses of rvalue references: 

    - They are used in working with the move constructor and move assignment.
    - cannot bind non-const lvalue reference of type ‘int&‘ to an rvalue of type ‘int’.
    - cannot bind rvalue references of type ‘int&&‘ to lvalue of type ‘int’.
    • Used in moving semantics and perfect forwarding
    • Move semantics is all about r-value references
    • Used by move constructor and move assignment operator to efficiently move an object rather than copy it
    • R-value reference operator (&&)


    For Example:

    int a = 10;

    // Declaring lvalue reference
    int& lref = a;

    // Declaring rvalue reference
    int&& rref = 20;

    For Example2:

    int x {100}
    int &l ref = x;   // l-value reference here x is lvaue as it can be addressed
    l ref = 10;       // change x to 10
     
    int &&r ref = 200; // r-value ref 
    r_ref = 300;       // change r_ref to 300
    
    int &&x_ref = x;   // Compiler error coz we were trying to assign lvalue to a rvalue reference

    Referenced from : https://www.geeksforgeeks.org/lvalue-and-rvalue-in-c-language/ && https://www.geeksforgeeks.org/lvalues-references-and-rvalues-references-in-c-with-examples/
*/

#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    int x{100};

public:

int *pika (){
    int *variable = reinterpret_cast<int*>(&x);
    return variable;
}

};



int main(){
    Car a;

   cout << "address of class a is : "<<&a <<endl;

//    int *x{&a};
//    x = &a;
    int *variable = reinterpret_cast<int*>(&a);
    *variable = 1337;
    cout<<variable;
    
    int *b{a.pika()};
    cout<<"Value of B : "<<*(a.pika())<<endl;
    
    string c{"Hello"};
    string d{" WAZAAAAUUPP!!!"};

    string &&e{c+d};
    cout<<e<<endl;
    int &&lref{20}; //rvalue reference
    
   // int &f{5};  //as you can see here that &f cannot store 5 as it is a rvalue to store it we will have to use &&f that can store rvalue
}