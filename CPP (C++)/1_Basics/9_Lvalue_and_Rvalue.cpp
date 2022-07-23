/*
    *********************
    * Lvalue and Rvalue *
    *********************
     ________
    | Lvalue |
    |________|

    L-value: “l-value” refers to memory location which identifies an object. 
    l-value may appear as either left hand or right hand side of an assignment operator(=). 
    l-value often represents as identifier. Expressions referring to modifiable locations are called 
    “modifiable l-values“. A modifiable l-value cannot have an array type, an incomplete type, 
    or a type with the const attribute. For structures and unions to be modifiable lvalues, 
    they must not have any members with the const attribute. The name of the identifier denotes 
    a storage location, while the value of the variable is the value stored at that location. 
    An identifier is a modifiable lvalue if it refers to a memory location and if its type is 
    arithmetic, structure, union, or pointer. For example, if ptr is a pointer to a storage region, 
    then *ptr is a modifiable l-value that designates the storage region to which ptr points. 
    In C, the concept was renamed as “locator value”, and referred to expressions that 
    locate (designate) objects. The l-value is one of the following:

    - The name of the variable of any type i.e, an identifier of integral, floating, pointer, 
      structure, or union type.
    - A subscript ([ ]) expression that does not evaluate to an array.
    - A unary-indirection (*) expression that does not refer to an array
    - An l-value expression in parentheses.
    - A const object (a nonmodifiable l-value).
    - The result of indirection through a pointer, provided that it isn’t a function pointer.
    - The result of member access through pointer(-> or .)

    For Example:

    // declare a an object of type 'int'
    int a;

    // a is an expression referring to an
    // 'int' object as l-value
    a = 1;

    int b = a; // Ok, as l-value can appear on right

    // Switch the operand around '=' operator
    9 = a;

    // Compilation error:
    // as assignment is trying to change the
    // value of assignment operator

     ________
    | Rvalue |
    |________|

    rvalue simply means an object that has no identifiable location in memory (i.e. having an address).

    - Anything that is capable of returning a constant expression or value.
    - Expression like a+b will return some constant.

    R-value: r-value” refers to data value that is stored at some address in memory. A r-value 
    is an expression that can’t have a value assigned to it which means r-value can appear on 
    right but not on left hand side of an assignment operator(=).

    For Example:

    // declare a, b an object of type 'int'
    int a = 1, b;

    a + 1 = b; // Error, left expression is
		// is not variable(a + 1)

    // declare pointer variable 'p', and 'q'
    int *p, *q; // *p, *q are lvalue

    *p = 1; // valid l-value assignment

    // below is invalid - "p + 2" is not an l-value
    // p + 2 = 18;

    q = p + 5; // valid - "p + 5" is an r-value

    // Below is valid - dereferencing pointer
    // expression gives an l-value
    *(p + 2) = 18;

    p = &b;

    int arr[20]; // arr[12] is an lvalue; equivalent
			// to *(arr+12)
			// Note: arr itself is also an lvalue

    struct S { int m; };

    struct S obj; // obj and obj.m are lvalues

    // ptr-> is an lvalue; equivalent to (*ptr).m
    // Note: ptr and *ptr are also lvalues
    struct S* ptr = &obj;

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

   cout << "assress of class a is : "<<&a <<endl;

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