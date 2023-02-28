/*

    ****************
    * Shallow Copy *
    ****************
    • memberwise copy
    • Each data member is copied from the source object
    • The pointer is copied NOT what it points to (shallow copy)
    • Problem: when we release the storage in the destructor, the other object still
      refers to the released storage!
*/
// Copy Constructor - Shallow Copy
// Note: this program will crash
#include <iostream>

using namespace std;

class Shallow {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);
    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int; //data = memory address        //allocating new memory on the heap of 4 bytes and storing that allocated heap memory address to data 
    *data = d;      //*data = 100                  //we are dereferencing the data and storing 100 
}

Shallow::Shallow(const Shallow &source)         // &source which is a memory address it is referencing to obj1 data = memory address and *data = 100
        : data{source.data} {                   // here source.data = memory address, now you might wonder why we were able to a access source.data well : this line constructor is within the class Shallow and we are initializing &source object within the class so we are able to do this source.data as it can access the private variables of the class as it is withing the class itself not like void display_shallow(Shallow s) see on line 43
        cout << "Copy constructor  - shallow copy";
}

Shallow::~Shallow() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s) {       //this is a regular function not a class member function
    cout << s.get_data_value() << endl;
    //cout << s.data << *(s.data) << endl;  // as we are declaring this object s outside the class so we are not able to assess s.data as it is out of scope/class but it will work if you shift the function within the class Shallow
}

int main() {
    
    Shallow obj1 {100};     //after this is finished executing data = memory address and *data = 100
    display_shallow(obj1);  //as you can see here copy constructor is going to get called as we are passing obj1 to Shallow s
    
    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
    
    return 0;
}   // when the program goes out of scope the descructor is trying to free memory but its invalid data so the progorame crashes.