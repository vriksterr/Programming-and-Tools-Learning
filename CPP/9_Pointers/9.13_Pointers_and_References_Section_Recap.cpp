/*

    *****************************************
    * Pointers and References Section Recap *
    *****************************************

     __________________________
    | When to use Pointers vs References parameters
    |__________________________

    - Pass-by-Value
        - when the function dose not modify the actual parameter, and the parameter is small and efficient to copy
          like simple types (int, char, double, etc.)

    - Pass-by-Reference using a pointer
        - when the function does modify the actual parameter, and the parameter is expensive to copy, and its OK 
          to the pointer is allowed a nullptr value

    - Pass-by-Reference using a pointer to const
        - when the function does not modify the actual parameter, and the parameter is expensive to copy, and its OK 
          to the pointer is allowed a nullptr value

    - Pass-by-Reference using a const pointer to const
        - when the function does not modify the actual parameter, and the parameter is expensive to copy, and its OK 
          to the pointer is allowed a nullptr value, and you dont want to modify the pointer itself

    - Pass-by-reference using a reference 
        - when the function does modify the actual parameter 
        - and the parameter is expensive to copy,
        - and The parameter will never be nullptr

    - Pass-by-reference using a const reference 
        - when the function does not modify the actual parameter,
        - and the parameter is expensive to copy,
        - and The parameter will never be nullptr
*/