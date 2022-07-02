/*

    *************
    * Deep Copy *
    *************

    User-provided copy constructor
    • Create a copy of the pointed-to data
    • Each copy will have a pointer to unique storage in the heap
    • Deep copy when you have a raw pointer as a class data member
*/

// Copy Constructor - Deep Copy
#include <iostream>

using namespace std;

class Deep {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

/* Here is the copy constructor, here we simply dont copy the pointer instead we allocate storage for the copy of what we are pointing to and then copy
   the data itself over*/
Deep::Deep(const Deep &source) 
    : Deep {*source.data} {     //here its is doing a deep copy by delegating to our regular constructor
    cout << "Copy constructor  - deep copy" << endl;
}

Deep::~Deep() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s) {
    cout << s.get_data_value() << endl;
}

int main() {
    
    Deep obj1 {100};
    display_deep(obj1);
    
    Deep obj2 {obj1};
    
    obj2.set_data_value(1000);
  
    return 0;
}