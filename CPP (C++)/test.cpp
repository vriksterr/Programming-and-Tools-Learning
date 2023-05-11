/*   __________________________
    |
    |__________________________

    ***************************
    *
    ***************************

    //_________________________
    //
    //_________________________

    
    •
    •
    •

*/

#include <iostream>

class Integer {
private:
    int value;

public:
    Integer(int value2 = 0) : value(value2) {}

    Integer operator+(const Integer &other) const {
        int sum = value + other.value;
        Integer d(sum);
        return d;
    }

    void print() const {
        std::cout << value << std::endl;
    }
};

int main() {
    Integer a(10), b(20), c;
    Integer (99);                   // a temporary object basicallyy to test
    c = a + b; // Call the "+" operator overload
    c = Integer (100);              // here another example
    c.print(); // Output: 30
    return 0;
}