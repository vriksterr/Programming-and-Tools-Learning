/*
    ***************************
    * Dereferencing a Pointer *
    ***************************

    Access the data we are pointing to - dereferencing a pointer

    -if score_ptr is a pointer and has a valid address
    -Then you can access the data at the address contained in the score_ptr using the dereferencing operator *

    Meaning 

    *score_ptr will show the stored value at that address which is 100
    and if we just use score_ptr in output we get the address as output
*/

// Dereferencing

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int score {100};
    int *score_ptr {&score};

    cout << *score_ptr << endl;		// 100

    *score_ptr = 200;
    
    cout << *score_ptr << endl;		// 200
    cout << score << endl; 			// 200

    cout << "\n------------------------------" << endl;
    double high_temp {100.7};
    double low_temp {37.4};			       
    double *temp_ptr {&high_temp};    

    cout << *temp_ptr << endl;   	// 100.7    	    
    temp_ptr = &low_temp;	
    cout << *temp_ptr << endl;   	// 37.4   	    

    cout << "\n------------------------------" << endl;

    string name {"Frank"};
    string *string_ptr {&name};

    cout << *string_ptr << endl;   	// Frank   
    name = "James"; 	    
    cout << *string_ptr << endl;   	// James  
//
    cout << "\n------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;    // Larry
    
    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)  
        cout << stooge << " ";
    cout << endl;
    
    cout << endl;
    return 0;
}