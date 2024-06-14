/*

    ***********************
    * Recursive Functions *
    ***********************

    -A recursive function is a function that calls itself
        -Either directly or indirectly through another function
    -Recursive problem solving
        -Base case
        -Divide the rest of problem into subproblem and do recursive call
    -There are many problems that lend themselves to recursive solutions
    -Mathematic -Factorial, Fibonacci, Fractals,...
    -Searching and sorting - binary search, search trees,...
    
For Example:-

    unsigned long long factorial(unsigned long long n){

        if (n == 0)
            return 1;                   //base case
        return n * factorial(n-1);      //recursive case
    }

    int main(){

        cout << factorial(8) <<endl;    //40320
        return 0;
    }

    ->Important Notes

    -If recursion dosent eventually stop you will have infinite recursion
    -Recursion can be resource intensive
    -Remember the base case(s)
        -It terminates the recursion
    -Only use recursive solutions when it makes sense
    -Anything that can be done recursively can be done iteratively
        -Stack overflow error

    //Watch the video 013 Recursive Function for drawing explanation
*/


#include <iostream>
using namespace std;

// Recursion - Fibonacci
unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;	             // base cases
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}

// Recursion - Factorial

unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;	             // base case
    return n * factorial(n-1); // recursive case
}

int main() {
    //Fibonacci
    cout << fibonacci(5) << endl;   // 5
    cout << fibonacci(30) << endl;	// 832040 
    cout << fibonacci(40) << endl; // 102334155
    
    //Factorial
    cout << factorial(3) << endl;       // 6
//    cout << factorial(8) << endl;     // 40320
//    cout << factorial(12) << endl;   // 479001600
//    cout << factorial(20) << endl;   // 2432902008176640000
    return 0;
}
