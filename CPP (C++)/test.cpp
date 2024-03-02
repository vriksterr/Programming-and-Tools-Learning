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
#include <utility> // for std::pair

int func() {
    int a = 5, b = 10;
    return b=11, b; // Returns b
}

int main() {
    // Call the function
    std::cout<<func();

    return 0;
}
