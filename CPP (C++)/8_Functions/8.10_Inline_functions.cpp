/*
   ******************** 
   * Inline Functions *
   ********************
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
    result = add+numbers(100,200); 
    return 0;
}
*/