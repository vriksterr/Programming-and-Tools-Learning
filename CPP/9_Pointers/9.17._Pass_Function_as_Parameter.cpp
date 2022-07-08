//https://www.geeksforgeeks.org/passing-a-function-as-a-parameter-in-cpp/#:~:text=Passing%20pointer%20to%20a%20function,C%2B%2B


#include <iostream>
using namespace std;
  
// Function that add two numbers
int add(int x, int y)
{
    return x + y;
}
  
// Function that multiplies two
// numbers
int multiply(int x, int y)
{
    return x * y;
}
  
// Function that takes a pointer
// to a function
int invoke(int x, int y, int (*func)(int, int))
{
    return func(x, y);
}
  
// Driver Code
int main()
{
    // Pass pointers to add & multiply
    // function as required
    cout << "Addition of 20 and 10 is ";
    cout << invoke(20, 10, &add)    //we can also remove & from add and multiply and it will still work coz pointer is pointing to a function
         << '\n';
  
    cout << "Multiplication of 20"
         << " and 10 is ";
    cout << invoke(20, 10, &multiply)
         << '\n';
  
    return 0;
}