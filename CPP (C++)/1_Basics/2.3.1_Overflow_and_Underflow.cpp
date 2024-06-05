/*

    *****************************
    *   Overflow and Underflow  *
    *****************************

     _______________
    |   Overflow   |
    |______________|
    As you might have understood that number or char are represented in binary format and you might also know that based on how many bit you can have a limit on 
    how many different types of numbers you can represent 
    for eg.
    00000000 = 0
    00000001 = 1
        .
        .
        .
    11111101 = 253
    11111110 = 254    
    11111111 = 255
    00000000 = 0
    now if we add 1 more to 255 it will flip back to 00000000 as the runber pattern range is exhausted till 255.

     ________________
    |   Underflow   |
    |_______________|
    This is the opposite of what happens in overflow let me explain with an example !

        ```
        unsigned char char_var {55};
        unsigned char val1 {130};
        unsigned char val2 {131};

        char_var = val1 - val2; //Underflow
        std::cout<< "char_var(exp -1)" << static_cast<int>(char_var) << std::endl;
        ```
        Now in this program all variables are unsigned meaning they can only store +ve values but we are doing 130-131 which will result into -1 as the value is being stroed in char_var(which is unsigned)
        its going to instead store 255 and this is called underflow.

*/