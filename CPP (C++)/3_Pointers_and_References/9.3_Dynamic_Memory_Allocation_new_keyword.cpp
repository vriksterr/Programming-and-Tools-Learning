/*
    *****************************
    * Dynamic Memory Allocation *
    *****************************

    Allocation storage from the heap at runtime

    -We often dont know how much storage we need until we need it
    -We can allocate storage for a variable at runtime
    -Recall C++ arrays
        -We had to explicitly provide the size and it was fixed
        -But vectors grow and shrink dynamically
    -We can use pointers to access newly allocated heap storage

     _______________________________________________________
    | How is it allocated and deallocated and various types |
    |_______________________________________________________|
    
    TO INITIALIZE:-                              // new is a Operator like + - *% /
    int *ptr= new int;                           // It will create a single block of type integer and return the pointer the address

    int *ptr= new int(10)or(size);               // Dynamic Allocation

    int *ptr= new int[size]{} or [size] or [5];  // Dynamic Array and the pointer to the first eliment will be returned and stored in ptr

    TO DELETE:-
    delete ptr; //this will delete the first 2 ptr coz they both are same
    delete [] ptr;  //will delete entire chunk of array memory 

    
    
    For Example:

    int *int_ptr{nullptr};

    int_ptr = new int       // allocate an integer on the heap

    cout<< int_ptr <<endl;  //0x2747f28
    cout<< *intptr <<endl;  //41188048 - garbage

    *int_ptr = 100;

    cout<< *int_ptr <<endl; //100

    delete int_ptr;     // frees the allocated storage from memory


    Now this allocation and deallocation of memory happens in HEAP inside memory
    Stack is where the functions reside poping in and out and other parts of memory are there as well read a book or online 
*/

// Dynamic Memory
#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int;               // allocate the int on the heap
    cout << int_ptr << endl;         // use it
    delete int_ptr;                  // release it
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double[size]{};    // allocate the storage on the heap
    cout << *temp_ptr << endl;       // use it
    delete [] temp_ptr;             // release it
    cout << endl;

    new int {5};                     //we can create a help memory without even storeing its address for use either note its not usefull as we just lost access to it as now we dont know what the address is going to be of this int
    
    //allocating a heap storage and using it
    int *pointer = new int {6};
    *pointer = 77777777;
    cout<<*pointer;
    delete pointer;
    
    return 0;
}