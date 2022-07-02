/*
    ***************
    * Scope Rules *
    ***************

    -C++ uses scope rules to determine where an identifier can be used
    -C++ uses static or lexical scoping
        -Meaning that the scope is determined the same way you read a program
    -Local or Block scope
        -Identifiers declared in a block{}
        -Function parameters have block scope
        -Only visible within the block{} where declared
        -Function local variables are only active while the function is executing
        -Local variables are not perserved between function calls
        -With nested blocks inner blocks can 'see'but outer blocks cannot 'see' in
    -Global scope
        -Identifier declared outside any function or calss
        -Variable to all parts of the program after the global identifier has been declared
        -Global constants are OK
        -Best practice - dont use global variables

        When a function is call it can mean that the function as being activated and function parameter is bount to storage
        they become alive, and there lifetime is while the function is executing.Once the function completes the function 
        is deactivated and these varuables and parameters are no longer alive, this dosent mean that they are somehow
        marked as unavailable. IT simple means that the compiler dosent recognize them any longer, and the storage they were
        bound to will likely be reused.That means the values of local variables are not perserved between function calls.
        If we have nested blocks,then statements in the inner blocks can see identifiers declared in the outer blocks, but 
        outer blocks cannot see the variables defined in the inner blocks.

        However there is one type whose value is preserved between function calls.
    -Static Local Variables
        -Declared with static qualifier

            static int value {10};
        -Value is preserved between function calls
        -Only initialized the first time the function is called

*/
#include <iostream>

using namespace std;

void local_example();
void global_example();
void static_local_example();

int num {300};    // Global variable - declared outside any class or function

void global_example() {
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_example(int x) {
    int num {1000};     // local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    num=x;
    cout << "Local num is: " << num << " in local_example - end" << endl;
    // num1 in main is not within scope - so it can't be used here.
}

void static_local_example() {
    static int num {5000};      // local to static_local_example static - retains it value between calls
    cout << "\nLocal static  num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local static  num is: " << num << " in static_local_example - end" << endl;

    //As num only gets declared once coz of static next time we call static_local_example again num will be 6000 not 5000 and output will be 7000 and it will be the new num and it will keep on going as many times as we call this function 
}

int main() {
    
    int num {100};  // Local to main
    int num1 {500}; // Local to main
    
    cout << "Local num is : " << num << " in main" << endl;
    
    {   // creates a new level of scope
        int num {200};  // local to this inner block
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }
    
    cout << "Local num is : " << num << " in main" << endl;

    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
//    static_local_example();
//    static_local_example();

    cout << endl;
    return 0;
}




