/*
    the hard time i have here is understanding why inx x gives error but int z dosent i think i can only understand it by learning how compiler works and 
    later reading the source code of the clang or gcc to see how such things are checked during compilation time

    Once understood update Switch statement in Control Flow !!! you can also look there to see the current understand my current understand how case are handled by compiler.

*/
#include <iostream>
using namespace std;

int main() {
    switch (3) {
        case 1:
            goto point_1;
            int x = 10; // initialization is skipped and compiler gives "initialization skip error"
            break;

        case 2:
            int y;
            break;

        case 3:
            goto point_2;
            int z = 20; // initialization is skipped but no error of "initialization skip" happens here 
            cout << z;
            break;
            
    }

    point_1:
        cout << "hello!!" << endl;

    point_2:
        cout << "bye!!" << endl;
        
return 0;
}