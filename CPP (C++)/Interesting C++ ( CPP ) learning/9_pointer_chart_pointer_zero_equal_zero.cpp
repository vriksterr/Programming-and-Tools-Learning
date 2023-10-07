/*
    Ok se here is the statement:

    *(char*)0 = 0; - What Does the C++ Programmer Intend With This Code? 
    Explanation:

    The code `*(char*)0 = 0;` in C++ is a potentially dangerous and undefined behavior. It attempts to write a value of 0 to the memory 
    address 0, which is typically not a valid memory location and is dereferencing a null pointer. This code can have unpredictable consequences 
    and often leads to program crashes or unexpected behavior.

    In C++, you should never attempt to dereference a null pointer or write to memory locations that are not properly allocated or accessible. 
    Doing so can lead to segmentation faults, program crashes, or other undefined behavior, and it's a common source of bugs and security vulnerabilities.

    If you need to initialize a character pointer to a specific value, you should do so with a valid memory address, like this:

    ```cpp
    char* ptr = some_valid_memory_address;
    *ptr = 0;
    ```

    In this case, `ptr` points to a valid memory location, and setting `*ptr` to 0 would initialize the byte at that memory location to the value 0.

    Source: https://youtu.be/dFIqNZ8VbRY
*/