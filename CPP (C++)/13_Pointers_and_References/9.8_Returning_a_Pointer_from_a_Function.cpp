/*

    ***************************************
    * Returning a Pointer from a Function *
    ***************************************

    - Function can also return pointers
            type *function();

    - Should return pointers to
        - Memory dunamically allocated in the function
        - To data that was passed in
    
    - Never return a pointer to a local function variable!


     _______________________
    | Returning a Parameter |
    |_______________________|

    int *largest_int(int *int_ptr1, int *int_ptr2){

        if (*int_ptr1 > *int_ptr2)
            return int_ptr1;
        else
            return int_ptr2;
    }

    int main(){

        int a{100};5555
        int b{200};
        int *largest_ptr{nullptr};

        largest_ptr = largest_int(&a, &b);  // Returning a Parameter

        cout<< *largest_ptr <<endl; //200
        return 0;
    }

     ________________________________________
    | Returning Dynamically Allocated Memory |
    |________________________________________|

    int *create_array(size_t size, int intit_value = 0) {

        int *new_storage{nullptr};

        new_storage = new int[size];    //new int[size] is in BOLD letters

        for(size_t i{0}; i < size; i++)
        *(new_storage + i) = init_value;

        return new_storage;
    }

     ____________________________________________
    | Never Return a Pointer to a Local Variable |
    |____________________________________________|

    int *dont_do_this(){
        int size{};
        . . .
        return &size;   //dont return a local variable coz we are returning the address of a local variable in the function, 
                          the variables on the stack and the function just terminated, so this variable is now past its lifetime. So that address is in use by some one else. 
                          The next time the function is called or any function is called, the stack area will be reused and the pointer will now be pointing into that new functions activating record. 
                          If you overwrite the data its pointing to, you could trash the stack pointers, static links, all kinds of important information on the activation record.
    }

    int *or_this(){
        int size{};
        int *int_ptr{&size};
        . . .
        return int_ptr; //dont return a local variable cos this function will be removed from memory once its finished
    }

*/

// Return Pointer
#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
   int *new_storage {nullptr};
   new_storage = new int[size];   
   for (size_t i{0}; i < size; ++i)
      *(new_storage + i) = init_value;
   return new_storage;
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}
int main() {
    int *my_array {nullptr};    // will be allocated by the function
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);  // create the array
    cout << "\n--------------------------------------" << endl;

    display(my_array, size);
    delete [] my_array;     // be sure to free the storage 
    return 0;
}