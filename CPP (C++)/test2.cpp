#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011

    // Bitwise AND
    cout << (a & b) << endl;  // Output: 1 (binary: 0001)

    // Bitwise OR
    cout << (a | b) << endl;  // Output: 7 (binary: 0111)

    // Bitwise XOR
    cout << (a ^ b) << endl;  // Output: 6 (binary: 0110)

    // Bitwise NOT
    cout << (~a) << endl;     // Output: -6 (binary: 11111010 in two's complement)

    // Left Shift
    cout << (a << 1) << endl; // Output: 10 (binary: 1010)
    std::cout << "data (bin) : " << std::bitset<4>(a) << std::endl;

    // Right Shift
    cout << (a >> 1) << endl; // Output: 2 (binary: 0010)
}