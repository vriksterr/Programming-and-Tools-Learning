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
    
      /__________________/
     /  TO INITIALIZE:- /
    /__________________/
                                 // new is a Operator like + - * % / and it can be overloaded too.
    int *ptr= new int;                           // It will create a single block of type integer and return the pointer the address

    int *ptr= new int(10)or(size);               // Dynamic Allocation

    int *ptr= new int[size]{} or [size] or [5];  // Dynamic Array and the pointer to the first eliment will be returned and stored in ptr


      /__________________/
     /   TO DELETE:-    /
    /__________________/
    When you delete a dynamically allocated object using delete, the memory associated with that object is deallocated, and the pointer 
    itself becomes a dangling pointer. Dangling pointers point to memory that has been released(and there can be anything stored at that address now as 
    os must be using it for something else), and using them results in undefined behavior.

    It's essential to avoid dereferencing dangling pointers because they can lead to crashes, data corruption, or other unpredictable issues. 
    After deleting an object with delete, it's a good practice to set the pointer to nullptr to make it clear that it no longer points to valid memory, like this: ptr = nullptr;

    Also note dont delete a pointer twice as a C++ programe can be super big with multiple files make sure that that pointer is deleted just once coz lets say if you delete
    that pointer once now that address is free and now can be used by any program or OS but if you delete that pointer again what ever is storred at that address will be
    freed again to be grabbed by another program now in this case that previous program now tries to access that values stored there but now those values are random gibrish
    and now coz of this the programe is going to malfunction and at this point anything can happen as a chain of reaction can take place making the OS crash too so dont delete
    the pointer twice.

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

    Now this allocation and deallocation of memory happens in HEAP memory

*/

// Dynamic Memory
#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int;               // allocate the int on the heap
    cout << int_ptr << endl;         // use it
    delete int_ptr;                  // released the address which can now be used by another program
    
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
    cout<<endl<<*pointer;
    delete pointer;


    // Another Program to check what the values will be of a pointer after the pointer is deleted
    cout<<endl<<endl;
    int* ptr = new int;  // Allocate memory for an int
    *ptr = 42;           // Assign a value to the int

    std::cout << "Value at ptr: " << *ptr << std::endl;
    std::cout << "Address of ptr pointer: " << &ptr << std::endl;
    std::cout << "Address of value pointed to by ptr: " << &(*ptr) << std::endl; // this is same as ptr basically which tell the address location of int 42 in Heap memory basically what is stored in ptr
    std::cout << "Address stored in ptr: " << ptr << std::endl;

    // Deallocate memory
    delete ptr;
    std::cout<<std::endl<< "AFTER DELETING PTR!!"<<std::endl;
    
    std::cout << "Value at ptr: " << *ptr << std::endl;
    std::cout << "Address of ptr pointer: " << &ptr << std::endl;
    std::cout << "Address of value pointed to by ptr: " << &(*ptr) << std::endl;
    std::cout << "Address stored in ptr: " << ptr << std::endl;
    /* Output:
    Value at ptr: 42
    Address of ptr pointer: 0x7ffff6c71e98
    Address of value pointed to by ptr: 0x55858b0886f0
    Address stored in ptr: 0x55858b0886f0

    AFTER DELETING PTR!!
    Value at ptr: 1482207368        <- look after deleting the address the values now are random this value are of another program which is using this value which is stored at 0x55858b0886f0 memory address
    Address of ptr pointer: 0x7ffff6c71e98
    Address of value pointed to by ptr: 0x55858b0886f0
    Address stored in ptr: 0x55858b0886f0
    */

   // but if you use ptr = nullptr; after delete ptr the programe will exit if you try to access *ptr (cout << *ptr;) the os will see that you are trying to access something
   // that dosent exist and will exit the programe which is a good thing Safety.
    ptr = nullptr;
    std::cout<<std::endl<< "AFTER PUTTING PTR = NULLPTR!!"<<std::endl;
    
    std::cout << "Value at ptr: " << *ptr << std::endl;
    return 0;
}