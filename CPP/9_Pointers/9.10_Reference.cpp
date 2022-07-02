/*

    ************************
    * What is a Reference? *
    ************************

    - An alias for a variable
    - Must be initialized to a variable when declared
    - Cannot be null
    - Once initialized cannot be made to refer to a different variable
    - Vary useful as function parameters
    - Might be helpful to think of a reference as a constant pointer that is automatically dereferenced

    Also refer to section 8.10 or section 11 in cpp videos for more details 

     _________________________________________
    | Using reference in range-based for loop |
    |_________________________________________|

    First look:

    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto str: stooges)
        str = "Funny";      // changes the copy

    for (auto str:stooges)
        cout << str <<endl; // Larry, Moe, Curly

    
    Second look:

    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto &str: stooges)
        str = "Funny";      // changes the actual

    for (auto str:stooges)
        cout << str <<endl; // Funny, Funny, Funny

    
    Third look:

    vector<string> stooges {"Larry", "Moe", "Curly"};

    for(auto const &str: stooges)
        str = "Funny";      //Compiler Error

    Forth look:

    //Now this method is going to be memory light as it is not copying each element from stooges to str instead &str referencing to stooges

    vector<string> stooges {"Larry", "Moe", "Curly"};

    for(auto const &str: stooges)
        cout << str << endl;    // Larry, Moe, Curly

*/

// References
// Please see the section 11 examples for references as function paramters
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int num {100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num  = 200;
    cout << "\n---------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;
    cout << "\n---------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n---------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto str: stooges)     
        str = "Funny";              // str is a COPY of the each vector element
      
    for (auto str:stooges)        // No change
        cout << str << endl;
 
    cout << "\n---------------------------------" << endl;
    for (auto &str: stooges)  // str is a reference to each vector element
        str = "Funny";
     
    for (auto const &str:stooges)   // notice we are using const
        cout << str << endl;            // now the vector elements have changed
    
    cout << endl;
    return 0;
}