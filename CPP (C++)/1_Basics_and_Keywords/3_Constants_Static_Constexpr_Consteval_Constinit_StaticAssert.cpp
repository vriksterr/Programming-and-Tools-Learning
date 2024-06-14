/*
    *****************************
    * Constants & Static in C++ *
    *****************************
    To understand this first understand Datatypes, Functions and Control Program Flow then you will understand where all you can you this in other parts in C++ such as pointers.

    *************
    * Constants *
    *************

    This parameter that is effectively read only code is more secure and conveys intent useful for references and pointers and variables that you dont want to be changed.

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

    Do note that const dosent mean other program cant change the value the const power remains withing the program meaning that rule only applies to the program.

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
            https://www.youtube.com/watch?v=f3FVU-iwNuA     //static
            https://www.youtube.com/watch?v=u8jw0LsQFFg     //static
            https://www.geeksforgeeks.org/difference-between-static-and-constant-function-in-cpp/
            https://www.geeksforgeeks.org/const-member-functions-c/
            https://stackoverflow.com/questions/28404538/what-is-the-difference-between-int-const-functionparameters-int-functioncons
            https://www.educative.io/answers/what-are-const-functions-in-cpp
            https://cookierobotics.com/032/#:~:text=An%20example%20of%20using%20static,all%20instances%20of%20this%20class.
            https://stackoverflow.com/questions/177437/what-does-const-static-mean-in-c-and-c
            https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm#:~:text=A%20static%20member%20function%20can,functions%20from%20outside%20the%20class.


    *************
    * Constexpr *
    *************
    `constexpr` is a keyword introduced in C++11 that allows the definition of expressions and functions that can be evaluated at compile time. This keyword provides a 
    way to create constants with more complex initializations and functions that can be executed during compilation, leading to potential performance improvements and safer, more predictable code.

    Remember when you use Constexpr that variable or expression is also constant and compiler dosenot gurantee that it will work all the time.

    ### Key Features of `constexpr`:

    1. **Compile-Time Evaluation**:
        - `constexpr` ensures that a variable or a function can be evaluated at compile time, provided the inputs are also constant expressions.

    2. **Constant Expressions**:
        - `constexpr` can be applied to variables, functions, constructors, and destructors to specify that they can be evaluated at compile time.

    3. **Variables**:
        - A variable declared with `constexpr` is implicitly `const` and must be initialized with a constant expression.
        ```cpp
        constexpr int square(int x) {
            return x * x;
        }
        constexpr int result = square(5); // Evaluated at compile time
        ```

    4. **Functions**:
        - A function declared with `constexpr` must have a body that can be evaluated at compile time. All expressions within the function body must also be constant expressions.
        ```cpp
        constexpr int factorial(int n) {
            return (n <= 1) ? 1 : (n * factorial(n - 1));
        }
        constexpr int fact5 = factorial(5); // Evaluated at compile time
        ```
    5. **if functions**:
        The `if constexpr` statement, introduced in C++17, allows compile-time conditional branching. This feature is particularly useful in template metaprogramming, where the condition can 
        depend on template parameters. If the condition in `if constexpr` evaluates to true, the associated block is compiled; otherwise, it is ignored by the compiler.

        Here's an example to illustrate how `if constexpr` can be used:

        ```cpp
        #include <iostream>
        #include <type_traits>

        // Function to print a value; behaves differently based on whether the value is an integral type or not
        template <typename T>
        void printValue(const T& value) {
            if constexpr (std::is_integral_v<T>) {
                std::cout << "The value is an integral type: " << value << std::endl;
            } else {
                std::cout << "The value is not an integral type: " << value << std::endl;
            }
        }

        int main() {
            printValue(42);          // Integral type
            printValue(3.14);        // Non-integral type
            printValue("Hello");     // Non-integral type

            return 0;
        }
        ```

        ### Explanation:

        1. **Template Function**:
        - `printValue` is a template function that takes a value of any type.

        2. **Conditional Compilation with `if constexpr`**:
        - The `if constexpr` statement checks if the type `T` is an integral type using `std::is_integral_v<T>`. This is a compile-time check.
        - If `T` is an integral type, the block inside `if constexpr (std::is_integral_v<T>)` is compiled, and the corresponding message is printed.
        - If `T` is not an integral type, the `else` block is compiled instead, and a different message is printed.

        3. **Main Function**:
        - `printValue` is called with different types of arguments: an integer, a floating-point number, and a string literal.
        - The output will be:
            ```
            The value is an integral type: 42
            The value is not an integral type: 3.14
            The value is not an integral type: Hello
            ```

        In this example, `if constexpr` enables the function to behave differently based on the type of the argument, and the unused branch of the `if constexpr` statement 
        is not compiled, ensuring that there are no compilation errors or overhead associated with the unused code.

    6. **Constructors**:
        - `constexpr` constructors allow objects to be initialized at compile time.
        ```cpp
        struct Point {
            constexpr Point(double x, double y) : x_(x), y_(y) {}
            constexpr double getX() const { return x_; }
            constexpr double getY() const { return y_; }
        private:
            double x_, y_;
        };

        constexpr Point p(3.0, 4.0); // Evaluated at compile time
        constexpr double x = p.getX(); // Evaluated at compile time
        ```

    7. **Destructors**:
        - Since C++20, destructors can also be declared as `constexpr`, allowing the objects to be destroyed at compile time if the program requires it.

        ### Benefits of `constexpr`:

        - **Performance**: Code evaluated at compile time can lead to faster runtime performance since calculations are done during compilation.
        - **Safety**: Compile-time evaluation catches errors early, during the compilation process, rather than at runtime.
        - **Predictability**: Ensures certain values are truly constant, providing guarantees about immutability and making the code easier to reason about.

        ### Usage Notes:

        - **Constraints**: Not all functions or expressions can be made `constexpr`. They must adhere to rules that ensure they can be evaluated at compile time (e.g., no dynamic memory allocation or non-constant global variables).
        - **Evaluation Context**: `constexpr` functions can also be called with runtime values, in which case they will be evaluated at runtime. The `constexpr` keyword only guarantees compile-time evaluation when all inputs are constant expressions.

        ### Example:

        ```cpp
        #include <iostream>

        // constexpr function
        constexpr int add(int a, int b) {
            return a + b;
        }

        int main() {
            // Evaluated at compile time
            constexpr int sum = add(3, 4);
            std::cout << "Sum: " << sum << std::endl;

            // Evaluated at runtime
            int x = 5;
            int y = 6;
            int runtimeSum = add(x, y);
            std::cout << "Runtime Sum: " << runtimeSum << std::endl;

            return 0;
        }
        ```

        In this example, `sum` is computed at compile time, while `runtimeSum` is computed at runtime because `x` and `y` are not constant expressions.

    Source:
    https://www.youtube.com/watch?v=8-VZoXn8f9U
    https://youtu.be/frifFlPO_uI?si=FushTUP6cYignGqY
    https://youtu.be/fZjYCQ8dzTc?si=AwA0UalW_F3gQmoJ
    https://www.youtube.com/watch?v=r2ZxhpSk8EA
    https://www.youtube.com/watch?v=QVHwOOrSh3w
    https://www.youtube.com/watch?v=KBny6MZJR64         // tells all
    https://www.youtube.com/watch?v=MGsSDSa6uSQ         //if constexpr C++17

    *************
    * Consteval *
    *************
    The `consteval` keyword, introduced in C++20, is used to declare functions that "must" be evaluated at compile time. This ensures that the function is called with constant expressions 
    and that the result is also a constant expression. If a `consteval` function is invoked in a context where the result cannot be computed at compile time, the program will not compile.

    ### Key Features of `consteval`:

    1. **Compile-Time Only**:
    - Functions declared with `consteval` must be evaluated at compile time. They cannot be used in runtime evaluations.

    2. **Guaranteed Constant Expressions**:
    - Any expression involving a `consteval` function will be a constant expression, provided the arguments are also constant expressions.

    3. **Immediate Invocation**:
    - Ensures that the function is always executed at compile time, providing strong guarantees about when and how the function will be evaluated.

    ### Example Usage:

    Here is an example demonstrating how to use `consteval`:

    ```cpp
    #include <iostream>

    // consteval function to compute the factorial of a number
    consteval int factorial(int n) {
        if (n <= 1) return 1;
        else return n * factorial(n - 1);
    }

    int main() {
        constexpr int fact5 = factorial(5); // Evaluated at compile time
        std::cout << "Factorial of 5: " << fact5 << std::endl;

        // Uncommenting the following lines will cause a compilation error,
        // because factorial is a consteval function and must be evaluated at compile time.
        // int n = 6;
        // int result = factorial(n); // Compilation error

        return 0;
    }
    ```

    ### Explanation:

    1. **`consteval` Function**:
    - `factorial` is declared with `consteval`, meaning it must be evaluated at compile time. It calculates the factorial of a given integer `n`.

    2. **Compile-Time Evaluation**:
    - In `main`, the `factorial(5)` call is evaluated at compile time, and the result is stored in `fact5`.

    3. **Compilation Error**:
    - The commented-out section demonstrates a scenario that would cause a compilation error. Attempting to call `factorial` with a non-constant expression (like a runtime variable `n`) is not allowed, as `consteval` functions require compile-time arguments and evaluation.

    ### Comparison with `constexpr`:

    - **`constexpr`**:
    - Functions can be evaluated at compile time or runtime, depending on the context.
    - A `constexpr` function can be called with runtime values, and the evaluation will happen at runtime in such cases.

    - **`consteval`**:
    - Functions must be evaluated at compile time.
    - If called with anything other than constant expressions, it results in a compilation error.

    ### Use Cases for `consteval`:

    - **Ensuring Compile-Time Computations**: When you need to guarantee that certain calculations or operations are always performed at compile time.
    - **Template Metaprogramming**: Useful in template metaprogramming where compile-time constants are crucial.
    - **Static Assertions**: When you want to use the result of a computation in static assertions or other compile-time checks.

    By using `consteval`, you can enforce stricter compile-time evaluation, which can help catch errors early and optimize performance by eliminating runtime overhead for certain calculations.

    Source:
    https://www.youtube.com/watch?v=KBny6MZJR64         // tells all


    *************
    * Constinit *
    *************
    It just cares about variable has a value at compile time and is not blank it is not same as const, constexpr or consteval where they are also constant and are
    not changeable whereas in the case of constinit it just cares about presense of a value for a variable.

    Also you cannot combine constexpr constinit together but you cant do const constinit. And constinit cant be inside main() coz its designed to solve problems that
    happen outside the main function as it can only be applied to a variable with static or thread storage duration.

    Example 1
    ```
    #include <iostream>

    int getValue() {
        return 42;
    }

    constexpr int getCompileTimeValue() {
        return 100;
    }

    // Use of constinit
    constinit int staticVar = getValue();               // Must be initialized at compile time
    constinit int constexprStaticVar = getCompileTimeValue(); // Initialized at compile time

    int main() {
        std::cout << "staticVar: " << staticVar << std::endl;
        std::cout << "constexprStaticVar: " << constexprStaticVar << std::endl;
        return 0;
    }
    ```
    Guarantee Initialization:
       •staticVar is ensured to be initialized at compile time using getValue(), even though getValue() is not a constexpr function.
       •constexprStaticVar is initialized using the constexpr function getCompileTimeValue(), ensuring compile-time initialization.



    Example 2:
    ```
    #include <iostream>

    // Function that is known at compile time
    constexpr int compileTimeValue() {
        return 42;
    }

    // Function that provides a value at runtime
    int runtimeValue() {
        return 100;
    }

    // Use of constinit
    constinit int compileTimeVar = compileTimeValue(); // Initialized at compile time
    constinit int runtimeVar = runtimeValue();         // Must be initialized at compile time

    int main() {
        std::cout << "compileTimeVar: " << compileTimeVar << std::endl;
        std::cout << "runtimeVar: " << runtimeVar << std::endl;
        return 0;
    }
    ```
    In the above example you can see that you have one function that is using constexpr meaning its value will be available at compile time and for the
    other one which is not going to be available at runtime so for `runtimevar` wont have a value associated to it at compile time so you will get an error.



    *****************
    * static_assert *
    *****************
    It is a compile time checker keyword that you can put anywhere in your program to check if the use of constexpr, consteval, constinit are actually evaluating at compiletime or not
    if they are not getting evaluated at compile time using `static_assert` you will get an error during compilation that way you can know that the compile time 
    evluation did not work and you need to fix some logic for it to work.

    static_assert(eye_count == 2);
    static_assert(SOME_LIB_MAJOR_VERSION = 123);

    this way we can know if its evluated at compile time or not if not we will get an error.
*/

