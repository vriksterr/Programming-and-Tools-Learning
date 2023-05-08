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
        return Integer(sum);
    }

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
The operator+ function takes a reference to another Integer object as its argument and returns a new Integer object with the sum of the two values. 
We can then use the overloaded operator+ to add two Integer objects, as shown in the main function.
*/