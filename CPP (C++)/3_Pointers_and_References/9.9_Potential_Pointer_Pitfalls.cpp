/*

    ******************************
    * Potential Pointer Pitfalls *
    ******************************

    - Uninitialized pointers

        int *int_ptr;   //Pointing Anywhere
        
        . . .
        
        *int_ptr = 100; //Hopefully a crash

    - Dangling Pointers
        - Pointer that is pointing to released memory
            - For example, 2 pointers point to the same data
            - 1 pointer releases the data with delete
            - The other pointer accesses the release data
        
        -Pointer that points to memory that is invalid
            -We saw this when we returned a pointer to a function local variable
            
    - Not checking if new failed to allocate memory
        - if new fails an exception is thrown
        - We can use exception handling to catch exceptions
        - Dereferencing a null pointer will cause your program to crash

    - Leaking memory
        - Forgetting to release allocated memory with deleted 
        - if you lose your pointer to the storage allocated on the heap you have not way to get to that storage again as the only way to heap storage is via pointer.
        - The memory is orphaned or leaked 
        - One of the most common pointer problems

*/