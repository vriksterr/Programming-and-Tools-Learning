/*   

    ***************************
    *
    ***************************

     __________________________
    |
    |__________________________

      /_________________________
     /
    /_________________________

    
    •
    •
    •

*/
#include <iostream>

// Function template to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using the max function template with different data types
    std::cout << "Max of 5 and 10 (int): " << max(5, 10) << std::endl;
    std::cout << "Max of 3.5 and 2.7 (double): " << max(3.5, 2.7) << std::endl;
    std::cout << "Max of 'hello' and 'world' (string): " << max("hello", "world") << std::endl;

    short int push = (short)155464;
    return 0;
}