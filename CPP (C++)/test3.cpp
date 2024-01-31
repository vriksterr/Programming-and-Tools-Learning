#include <iostream>

// Function declaration
int addNumbers(int a, int b);

int main() {
    // Function usage
    int result = addNumbers(5, 7);

    // Display the result
    std::cout << "Sum: " << result << std::endl;

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}
