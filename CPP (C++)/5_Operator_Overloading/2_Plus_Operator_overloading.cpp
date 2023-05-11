/*
    *********************************
    * Operator Overloading Examples *
    *********************************
    Here is an example to overloading an + operator the same way we can overload other operators this is just an simple example
*/

#include <iostream>

class Integer {
private:
    int value;

public:
    Integer(int value2 = 0) : value(value2) {}

    Integer operator+(const Integer &other) const {
        int sum = value + other.value;
        return Integer(sum);        //we cannot return declaration only what has already been declared but we can return temporary object
    }

    //The above can also be returned as this below where we are returning an object is which is already declared

    // Integer operator+(const Integer &other) const {
    //     int sum = value + other.value;
    //     Integer d(sum);
    //     return d;
    // }

    void print() const {
        std::cout << value << std::endl;
    }
};

int main() {
    Integer a(10), b(20), c;
    c = a + b; // Call the "+" operator overload
    c.print(); // Output: 30
    return 0;
}
/*
In this example, we define a class called "Integer" with an integer value and overload the "+" operator to allow adding two Integer objects. 
The operator+ function takes a reference to another Integer object as its argument and returns a new Integer temp object with the sum of the two values.
This temporary object is then assigned to the object c using the operator= function.
We can then use the overloaded operator+ to add two Integer objects, as shown in the main function.

!why dose &other have a value of 20 ?
 the line Integer b(20) creates a new Integer object named b with a value of 20. When we call the operator+ function on the line c = a + b, the other parameter
 of the operator+ function receives a reference to the b object that was passed as an argument. This means that &other is a pointer to the memory location of the b 
 object in memory.

 !but why the object is unnamed ?
 The object created by the Integer(sum) constructor is unnamed because it is created as a temporary object within the operator+ function.

 In C++, temporary objects can be created without being assigned to a variable. These temporary objects are typically used when an object 
 needs to be created and passed as a function argument or returned as a function return value.

 In the operator+ function, the Integer(sum) constructor is called to create a new Integer object with the value member variable set to 
 the sum of the value member variables of the two Integer objects that were added together. This new object is created as a temporary object 
 within the function, and is not assigned to a separate variable name.

 The unnamed temporary object is then returned directly from the operator+ function to the calling function, where it is assigned to the c 
 object using the assignment operator =.

 So while the object created by the Integer(sum) constructor is unnamed, it is still a fully functional object that is being used as the 
 return value of the operator+ function.

!why cant we do return Integer p(1000);
In C++, you cannot use a statement like return Integer p(100); directly in a return statement. 
This is because the C++ syntax for the return statement requires an expression to be returned.

The syntax for the return statement in C++ is:
return expression;

In this syntax, expression must be an expression that can be evaluated to a value. Integer p(100) is a declaration statement, not an expression.
It creates a variable named p of type Integer and initializes it with the value 100. This statement does not evaluate to a value that can be 
returned by the return statement.

In C++, creating a temporary object is an expression.

!What happnes to the temp object after its used
Yes, the temporary object created by the expression a + b is destroyed at the end of the full expression (which is the entire c = a + b; statement).

In C++, a temporary object created by an expression is destroyed at the end of the full expression that contains the expression, unless it is bound to a 
reference or a const-qualified object. In the case of c = a + b, the temporary object is not bound to anything, so it is destroyed after the full expression is evaluated.

The temporary object is deleted automatically by the C++ runtime system. C++ uses a technique called "automatic memory management" to ensure that objects are 
automatically deleted when they are no longer needed. When a temporary object goes out of scope (which happens at the end of the full expression that created it), 
C++ runtime system automatically destroys the object and releases the memory it occupies. 

This is in contrast to dynamic memory allocation using new and delete, where the programmer is responsible for managing the memory manually. 
In the case of automatic memory management, the runtime system takes care of memory management automatically, which can simplify programming 
and reduce the risk of memory leaks and other memory-related bugs.
*/