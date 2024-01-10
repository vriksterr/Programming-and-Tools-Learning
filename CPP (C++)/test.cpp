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

#include<iostream>
using namespace std;

int option0() {
    cout << "Program Ending" << endl;
    return 0;
}

int option1() {
    cout << "Program Continuing" << endl;
    return 1;
}

int main() {
    int value = 1;
    while (value == 1) {
        int option;
        cin >> option;

        if (option == 0) {
            int value = option0();
            cout << "Value of Value 0 is = " << value << endl;

            if (value == 0) {
                break; // Exit the loop
            }

        } else if (option == 1) {
            int value = option1();
            cout << "Value of Value 1 is = " << value << endl;
            if (value == 1) {
                continue;
            }
            // else, the loop will continue without the need for an explicit continue statement
        }
    value = 1;
    }

    return 0; // The program will exit when the loop ends
}
