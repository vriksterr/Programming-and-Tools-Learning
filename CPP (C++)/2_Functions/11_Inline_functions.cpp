/*
   ******************** 
   * Inline Functions *
   ********************
   An inline function is a function in C++ that is expanded or substituted by the compiler at the point of function call, rather than being executed as a 
   separate function call. The inline keyword is used to declare a function as inline.

   When a function is declared as inline, the compiler replaces the function call with the actual body of the function during the compilation process. 
   This eliminates the overhead of function call, stack manipulation, and return jumps, resulting in potentially faster code execution.

   The use of inline functions is particularly beneficial for small, simple functions that are called frequently within a program. By inlining these functions, 
   the compiler can optimize the code and potentially improve performance.

It's important to note that the use of inline is a hint to the compiler, and the compiler may choose to ignore the inline request in certain cases. The decision to inline a function ultimately rests with the compiler based on its optimization settings and other factors.
    Inline code is basically inline assembly code that avoids the function call overhead
        -Are generally faster
        -Bust if you inline a function many times, then you are duplicating function code that could lead to larger binaries.
        -Compilers are so sophisticated now that they will likely inline code even without your suggestion
        -Inline functions are usually declared in header or .h files since the defination must be available to every source file that uses it 

   -Functions calls have a certain amount of overhead
   -You saw what happens on the call stack ( in memory )
   -Sometimes we have simple functions
   -We can suggest to the compiler to compile them 'inline'
        -avoid function call overhead
        -generate inline assembly code
        -faster
        -could cause code bloat
   -Compiler optimizations are very sophisticated
        -will likely inline even without your suggestion  

    
For Example:-

inline int add_numbers(int a, int b) {
    return a+b ;
}

int main (){

    int result {0};
    result = add_numbers(100,200); 
    return 0;
}
*/
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 5);
    // The function call to add() is substituted with the actual body of the function
    // resulting in: int result = 3 + 5;
    return 0;
}
/*
In this example, the function add() is declared as inline. During compilation, the compiler may choose to replace the 
function call add(3, 5) with the expression 3 + 5, effectively inlining the function.
*/