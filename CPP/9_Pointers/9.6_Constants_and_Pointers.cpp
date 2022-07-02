/*

    **************************
    * Constants and Pointers *
    **************************
     ________________________________
    | Passing pointers to a function |
    |________________________________|

    const and Pointers

    - There are several ways to qualify pointers using const
        - Pointers to constants
        - Constant pointers
        - Constant pointers to constants

     ______________________
    | Pointer to constants |
    |______________________|

    - The data pointed to by the pointers is constant and cannot be changed.
    - The pointer itself can change and point somewhere else.

    For Example:

    int high_score{100};
    int low_score{65};

    const int *score_ptr{&high_score};

    *score_ptr = 86;        // ERROR
    score_ptr = &low_score; // OK

     ___________________
    | Constant Pointers |
    |___________________|

    - The data pointed to by the pointers can be changed.
    - The pointer itself cannot change and point somewhere else

    For Example:

    int high_score{100};
    int low_score{65};

    int *const score_ptr{&high_score};

    *score_ptr = 86;        // OK
    score_ptr = &low_score; // ERROR

     ________________________________
    | Constant Pointers to Constants |
    |________________________________|

    - The data pointed to by the pointer is constant and cannot be changed.
    - The pointer itself cannot change and point somewhere else.

    For Example:

    int high_score{100};
    int low_score{65};

    const int *const score_ptr{&high_score};

    *score_ptr = 86;        // ERROR
    score_ptr = &low_score; // ERROR

*/