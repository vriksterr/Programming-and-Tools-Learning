/*

     ________
    | Malloc |
    |________|
    -new is implemented via mallo(sizeof(...));
    -malloc is a built-in function declared in the header file <stdlib.h>
    -malloc is the short name for "memory allocation" and is used to dynamically 
     allocate a single large block of contiguous memory accouding to the size specified
    -if melloc is successful to create memory address it will return void * if not it will return
     null
    
     Syntax:    (void *)malloc(size_t size)
     here void * is a type caster
    
     ____________________________
    | why malloc returns void * ?|
    |____________________________|
    - remember malloc dosent have an idea of what it is pointing to.
    - it merely allocates memory requested by the user without knowing the type of data to be stored
      inside the memory.
    - malloc returns a void * as it dosent know the type will be stored there so we can type cast it
      to a different type, as void * is a pointer that can point to any type of data for eg.

        int *ptr = (int *)malloc(4);
        here malloc allocated 4 bytes of memory in the heap and void * is returned by malloc so we
        type caste it to an int * so it can be stored in int *ptr

     // video reference-> https://www.youtube.com/watch?v=Vch7_YeGKH4
*/
