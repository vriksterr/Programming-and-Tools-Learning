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

void increment(int &x) {
    // Increment the value of x by 1
  int assumption;
    x++;
}

int main() {
    int number = 5;
    int &car= number;
    std::cout << "Original number: " << number << std::endl;

    // Pass number by reference to the increment function
    increment(number);

    std::cout << "Incremented number: " << number << std::endl;

    return 0;
}

