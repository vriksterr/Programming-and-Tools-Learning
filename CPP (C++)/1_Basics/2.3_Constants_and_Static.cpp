/*
    *****************************
    * Constants & Static in C++ *
    *****************************

    *************
    * Constants *
    *************

    This parameter that is effectively read only code is moe secure and conveys intent useful for references and pointers and variables that you dont want to be changed.

    In C++, constants are values that cannot be modified once they are initialized. They provide a way to define fixed, immutable values in your code. 
    Constants are typically used to represent values that are known at compile-time and are not expected to change during program execution.

    In C++, you can define constants using the const keyword or the constexpr keyword.

    1.const Constants:
        const int MAX_VALUE = 100;
        const double PI = 3.14159;

    Constants defined with the const keyword can be used to store values of various types, including fundamental types (such as integers, 
    floating-point numbers, etc.) and user-defined types (classes, structures, etc.). Once a value is assigned to a const variable, it cannot be modified.

    2.constexpr Constants:
        constexpr int SIZE = 10;
        constexpr double AREA = PI * (RADIUS * RADIUS);

    Constants defined with the constexpr keyword are evaluated at compile-time. They are required to have a value that can be computed at compile-time using 
    constant expressions. constexpr can be used with both built-in types and user-defined types, as long as the expressions used to initialize them are constant expressions.

    Constants are typically preferred over variables when the value should not be modified after initialization, as they provide compile-time guarantees of immutability. 
    They can improve code readability and maintainability by making the intent of the value clear to other programmers.

    It's important to note that constants should be declared and defined in appropriate scopes (e.g., inside a function, within a class, or at the global level) 
    based on where they are intended to be used and their desired visibility.


    !For the Below topics referred the all the other topics to get the undestanding before persusing the const topics for them.

     ___________________
    |   Const Functions |
    |___________________|

    Certainly! Here are some examples of using constants with function declarations and parameters in C++:

    1. Constant function parameter:
    ```cpp
    void printValue(const int num) {
        // num is a constant parameter
        // It cannot be modified within the function
        std::cout << "Value: " << num << std::endl;
    }
    ```

    2. Constant function return value:
    ```cpp
    const double PI = 3.14159;

    const double calculateArea(const double radius) {
        // The return value is a constant
        // It cannot be modified after returning from the function
        return PI * (radius * radius);
    }
    ```

    3. Constant member function:
    ```cpp
    class MyClass {
    public:
        void printValue() const {
            // This member function is marked as const
            // It guarantees not to modify any data members of the class
            std::cout << "Value: " << value << std::endl;
        }

    private:
        const int value = 10;
    };
    ```

    In the examples above:
    - The `const` keyword is used to declare constants (`PI` and `value`).
    - The `const` keyword is used to specify that function parameters or return values are constant.
    - A constant function parameter cannot be modified within the function.
    - A constant return value cannot be modified after returning from the function.
    - A constant member function guarantees not to modify any data members of the class.

    By using constants with function declarations and parameters, you can ensure that certain values or behaviors 
    are constant and cannot be modified within the function or after returning from it. This helps in providing 
    const-correctness and enforcing immutability where necessary.

    
     ___________________
    |   Const Pointers  |
    |___________________|

    Certainly! Here are some examples of using constants with pointers in C++:

    1. Constant pointer to non-constant data:
    ```cpp
    int value = 5;
    int* const ptr = &value;  // constant pointer to non-constant data
    *ptr = 10;                // valid: can modify the data through the pointer
    ptr = nullptr;            // invalid: cannot change the pointer itself
    ```

    2. Non-constant pointer to constant data:
    ```cpp
    const int number = 100;
    const int* ptr = &number;  // non-constant pointer to constant data
    int value = *ptr;          // valid: can read the constant data through the pointer
    *ptr = 200;                // invalid: cannot modify the constant data
    ptr = nullptr;             // valid: can change the pointer itself
    ```

    3. Constant pointer to constant data:
    ```cpp
    const int number = 50;
    const int* const ptr = &number;  // constant pointer to constant data
    int value = *ptr;                // valid: can read the constant data through the pointer
    *ptr = 100;                      // invalid: cannot modify the constant data
    ptr = nullptr;                   // invalid: cannot change the pointer itself
    ```

    In the examples above:
    - The `const` keyword is used to define constants (`value` and `number`).
    - The `const` keyword is used to specify that the data being pointed to is constant.
    - The `*` operator is used to declare pointers.
    - The `const` keyword is used before the pointer declaration to make the pointer itself constant.
    - The `*` operator is used to access the value pointed to by the pointer.
    - Modifying the constant data through a pointer is invalid, while modifying the pointer itself is valid or invalid based on its const-ness.

    These examples demonstrate how to use constants in combination with pointers, allowing you to create constant pointers, pointers to constant data, or both.


    ***********
    * Statics *
    ***********

    In C++, the `static` keyword has multiple uses and can be applied to variables, functions, and class members. Here are the main uses of `static`:

    1. Static Variables: When applied to a variable inside a function or method, it makes the variable retain its value 
                         across multiple invocations of the function or method. The variable is initialized only once, and 
                         subsequent calls to the function or method will preserve its value. Here's an example:

    ```cpp
    void increment() {
        static int count = 0;  // Static variable
        count++;
        std::cout << "Count: " << count << std::endl;
    }

    int main() {
        increment();  // Count: 1
        increment();  // Count: 2
        increment();  // Count: 3
        return 0;
    }
    ```

    2. Static Functions: When applied to a function outside of a class, it restricts the function's scope to the translation 
                         unit where it is defined. Static functions are only accessible within the same source file and cannot 
                         be called from other files using external linkage. Here's an example:

    ```cpp
    static void internalFunction() {
        // This function has internal linkage
        std::cout << "Internal Function" << std::endl;
    }

    int main() {
        internalFunction();  // Internal Function
        return 0;
    }
    ```

    3. Static Class Members: When applied to class members (variables or functions), it means the member belongs to the class 
                             itself, rather than to any specific instance of the class. The static members are shared among all 
                             instances of the class. They can be accessed without creating an object of the class. Here's an example:

    ```cpp
    class MyClass {
    public:
        static int staticVariable;  // Static variable
        static void staticFunction() {
            std::cout << "Static Function" << std::endl;
        }
    };

    int MyClass::staticVariable = 10;

    int main() {
        std::cout << MyClass::staticVariable << std::endl;  // 10
        MyClass::staticFunction();                          // Static Function
        return 0;
    }
    ```

    Static members can be accessed using the scope resolution operator `::` with the class name, without the need to create an object of the class.

    These are the main uses of the `static` keyword in C++. It provides various functionalities such as preserving variable values across function calls, 
    restricting the scope of functions, and creating shared members within a class.



    Please Read:
    Source: https://www.youtube.com/watch?v=4fJBrditnJU
            https://www.youtube.com/watch?v=RC7uE_wl1Uc
            https://www.geeksforgeeks.org/difference-between-static-and-constant-function-in-cpp/
            https://www.geeksforgeeks.org/const-member-functions-c/
            https://stackoverflow.com/questions/28404538/what-is-the-difference-between-int-const-functionparameters-int-functioncons
            https://www.educative.io/answers/what-are-const-functions-in-cpp
            https://cookierobotics.com/032/#:~:text=An%20example%20of%20using%20static,all%20instances%20of%20this%20class.
            https://stackoverflow.com/questions/177437/what-does-const-static-mean-in-c-and-c
            https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm#:~:text=A%20static%20member%20function%20can,functions%20from%20outside%20the%20class.

*/

