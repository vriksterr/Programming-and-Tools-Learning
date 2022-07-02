/*
    ********************
    * Move constructor *
    ********************

    • Sometimes when we execute code the compiler creates unnamed temporary values as this value is not addressable so this is rvalue then this rvalue is assigned to lvalue total
            int total {0}; 
            total = 100 + 200;
        • 100 + 200 is evaluated and 300 stored in an unnamed temp value 
        • the 300 is then stored in the variable total 
        • then the temp value is discarded
    • The same happens with objects as well

     ______________________
    | When is it useful ? |
    |_____________________|

    • Sometimes copy constructors are called many times automatically due to the copy semantics of C++
    
    • If our class contains a raw pointer then we must implement deep copy hence this can he computaional 
      expensive since we have to allocate space for copy and copy the data over also Copy constructors 
      doing deep copying can have a significant performance bottleneck. The C++ move constructor moves
      the object rather than copy it this can be extreamly efficient
    
    • C++11 introduced move semantics and the move constructor 
    • Move constructor moves an object rather than copy it
    • Optional but recommended when you have a raw pointer
    • Also sometimes debugging you may not even see copy or move constructors being called if you experience
      this Copy elision - C++ may optimize copying away completely (RVO-Return Value Optimization) it basically
      eliminates unecessary copying

     ___________________
    | L-Value & R-Value |
    |___________________|

    Reffer to 9_Lvalue_and_Rvalue.cpp

     ________________________________________
    | L-Value & R-Value reference parameters |
    |________________________________________|

    We can do function overloading and the compiler will call the correct function depending on the parameter
    being an lvalue or rvalue

    For Example:

    int x{100};     //x is an l-value

    void func(int &num);    //function A
    void func(int &&num);   //fucntion B

    func(x);        //calls function A as x is a l-value
    func(200);      //calls function B as 200 is an r-value

     __________________
    | What does it do? |
    |__________________|

    • Instead of making a deep copy of the move constrictor
    •'moves the resource 
    • Simply copies the address of the resource from source to the current object 
    • And, nulls out the pointer in the source pointer
    • Very efficient
*/

// Move Constructor 
#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Move(int d);
    // Copy Constructor
    Move(const Move &source);
    // Move Constructor
    Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};

 Move::Move(int d)  {
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

// Copy ctor
Move::Move(const Move &source)
    : Move {*source.data} {
        cout << "Copy constructor  - deep copy for: " << *data << endl;
}

//Move ctor
Move::Move(Move &&source) noexcept 
    : data {source.data} {
        source.data = nullptr;
        cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move() {
    if (data != nullptr) {
        cout << "Destructor freeing data for: " << *data << endl;
    } else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main() {
    vector<Move> vec;

    vec.push_back(Move{10});

    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});


    return 0;
}

