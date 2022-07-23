/*
    **********************************
    * Passing Pointers to a Function *
    **********************************

    - Pass-by-reference with pointer parameters
    - We can use pointers and the derederence operator to achieve pass-by-reference
    - The function parameter is a pointer
    - The actual parameter can be a pointer or address of a variable

     ________________________________________________________
    |Pass-by-reference with pointers - Defining the Function |
    |________________________________________________________|

    void double_data(int *int_ptr);

    void double_data(int *int_ptr){
        *int_ptr *= 2;                  // *int_ptr = *int_ptr *2;
    }

     ________________________________________________________
    | Pass-by-reference with pointers - Calling the Function |
    |________________________________________________________|


    int main(){

        int value{10};
        cout << value << endl;  //10
        double_data(&value);
        cout << value <<endl;   //20
    }

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Passing Pointers 1
void double_data(int *int_ptr) {
   *int_ptr *= 2;	
}

// Passing Pointers 2
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Passing Pointers 3
void display( const vector<string> *const  v) {
//(*v).at(0) = "Funny";
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
  
 //   v = nullptr;
}

void display(int *array, int sentinel) {
    while (*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}

int main() {

    // Passing Pointers 1
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "-----------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout  << endl;

    // Passing Pointers 2
    int x {100}, y {200};
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    
    swap(&x, &y);
    
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    
    cout  << endl;

    // Passing Pointers 3

    //    cout << "-----------------------------" << endl;
    //    vector<string> stooges {"Larry", "Moe", "Curly"};
    //    display(&stooges);
   
    cout << "\n-----------------------------" << endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);
    
    cout  << endl;
    return 0;
}