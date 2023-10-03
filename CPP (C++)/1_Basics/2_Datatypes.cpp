/*
    ********************
    * Datatypes in C++ *
    ********************

    C++ provides a wide range of data types to represent different kinds of values, from integers and floating-point numbers to characters and custom-defined types. 
    Here are some of the common data types in C++:

    1. **Fundamental Data Types:**
    - `int`: Represents integers.
    - `char`: Represents a single character.
    - `float`: Represents single-precision floating-point numbers.
    - `double`: Represents double-precision floating-point numbers.
    - `bool`: Represents Boolean values (`true` or `false`).

    2. **Modifiers:**
    - `short`: Modifies `int` to represent short integers.
    - `long`: Modifies `int` to represent long integers.
    - `signed` and `unsigned`: Modifies integer types to represent signed or unsigned values.

    3. **Derived Data Types:**
    - `array`: Represents a fixed-size collection of elements of the same data type.
    - `pointer`: Represents a memory address.
    - `reference`: Represents an alias to an existing variable.
    - `function`: Represents a function.
    - `enum`: Represents an enumerated type with named constants.

    4. **User-Defined Data Types:**
    - `struct`: Defines a composite data type that groups variables of different data types.
    - `class`: Defines a composite data type with member variables and functions (used in object-oriented programming).
    - `union`: Defines a data type that can store different types of data in the same memory location.
    - `typedef`: Defines an alias for an existing data type.
    - `enum class` (C++11 onwards): Similar to `enum` but with more controlled scoping.

    5. **Custom Types:**
    - C++ allows you to define your own custom data types using `struct`, `class`, and `enum` to suit your specific needs.

    6. **Standard Library Types:**
    - C++ Standard Library provides additional data types like `string`, `vector`, `map`, `set`, and more, which are implemented as template classes.

    7. **User-Defined Literals (C++11 onwards):**
    - Allows you to create custom literals for specific data types, improving readability and expressiveness in code.

    8. **Other Data Types:**
    - Depending on the C++ standard and compiler, there may be additional data types and features introduced in newer standards, such as C++11, C++14, C++17, and C++20.

    Here's a simple example of using some of these data types:

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int integerNumber = 42;
        char character = 'A';
        float floatValue = 3.14159;
        double doubleValue = 2.71828;
        bool isTrue = true;

        cout << "Integer: " << integerNumber << endl;
        cout << "Character: " << character << endl;
        cout << "Float: " << floatValue << endl;
        cout << "Double: " << doubleValue << endl;
        cout << "Boolean: " << isTrue << endl;

        return 0;
    }
    ```
    In this example, we use several fundamental data types to store and display different kinds of values.

    Source: https://www.quora.com/How-does-one-increase-the-size-of-an-integer-in-C++
            https://www.quora.com/An-integer-has-2-bytes-in-C-Why#:~:text=So%2C%20size%20of%20int%20data,to%20keep%20it%20in%20memory.
            https://stackoverflow.com/questions/61411865/how-do-you-use-clangs-new-custom-size-int-feature
            http://blog.llvm.org/2020/04/the-new-clang-extint-feature-provides.html
            https://stackoverflow.com/questions/2331751/does-the-size-of-an-int-depend-on-the-compiler-and-or-processor
            https://www.geeksforgeeks.org/user-defined-data-types-in-c/
            https://www.geeksforgeeks.org/derived-data-types-in-c/
            https://prepinsta.com/c-plus-plus/predefined-datatypes/
*/