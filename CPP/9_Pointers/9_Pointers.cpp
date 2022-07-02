/*
    ***********
    * Pointer *
    ***********

    What is a pointer?

        -Pointer points to other variable via there address, pointer stores address of other variables 
         and pointer has its own address to so you can chain pointers if you want to
        
        -A variable
            -whose value is an address

        -What can be at that address?
            -Another Variable
            -A function

        -Pointers point to variables or functions?

        -If x is an integer variable and its value is 10 then i can declare a pointer that points to it

        -To use the data that the pointer is pointing to you must know its type

    Why use Pointers?

        Cant i just use the variable or function itself?
        Yes, but not always

        -Inside functions, pointers can be used to access data that are defined outside the function,
         Those variables may not be in scope so you cant access them by their name

        -Pointers can be used to operate on arrays very efficiently

        -We can allocate memory dynamically on the heap or free store.
            -This memory dosent even have a variable name
            -The only way to get to it is via a pointer

        -With OO pointer are how polymorphism works!

        -Can access specific addresses in memory
            -useful in embedded and systems applications


    -> Declaring Pointers

        variable_type *pointer_name;


        int *int_ptr;
        double* double_ptr;     // both methods of pointers positions are correct in compiler eyes but choose the pointer next to name not type
        char *char_ptr;
        string +string_ptr {nullptr};   // initializing pointer variables to 'point nowhere' is a good practice and the value of this will be 0 if you print it out on console


    -> IMPORTANT

    Initializing pointer variables to 'point nowhere'

    -Always initialize pointers
    -Uninitialized pointers contain garbage data and can 'point anywhere'
    -Initializing to zero or nullptr (C++ 11) represents address zero
        -implies that the pointer is 'pointing nowhere'
    -if you dont initialize a pointer to point to a variable or function that you should initialize it to nullptr to 'make it null'


    More in detail is here : https://www.cs.fsu.edu/~myers/c++/notes/pointers1.html

*/