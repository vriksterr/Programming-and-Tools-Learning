/*
    ********************
    * Datatypes in C++ *
    ********************

    C++ provides a wide range of data types to represent different kinds of values, from integers and floating-point numbers to characters and custom-defined types. Here are some of the common data types in C++:

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
#include<iostream>

int main(){

     //_________________________
    //      LITERAL SUFFIX
   //_________________________
   
   /*
     These suffixes help you explicitly specify the data type of a floating-point literal when needed, especially when you want to 
     force a specific type to avoid implicit type conversions.
   */

    auto num1 = 1;
    auto num2 = 1.1;
    auto num3 = 1.1f;   // you can either use f or F
    auto num4 = 1.1l;   // you can either use l or L
    auto num5 = 'e';

    /*  
        The Compiler checks the values and sees if its a int, double etc and based on that auto will be deduced as int, double etc.
        
        •Now whats the diff between auto num = 1.1f; vs auto num = (float)1.1; 
        well in the second case (float)1.1 is being cosidered as double by compiler and then its getting type converted to float where as in the 
        first case 1.1f is being considered as a float by compiler as we have a LITERAL SUFFIX f at the end of the value without the f, the 
        number would be interpreted as a double by default by compiler like in the case of num2 or second case (float)1.1.

        If you want to explicitly specify 1 as a double, you should use a suffix 1.0 or 1.0f to indicate a floating-point literal
    */

    std::cout<<"num1 is: "<<num1<<" and size of number 1 is: "<<sizeof(num1)<<std::endl;
    std::cout<<"num2 is: "<<num2<<" and size of number 2 is: "<<sizeof(num2)<<std::endl;
    std::cout<<"num3 is: "<<num3<<" and size of number 3 is: "<<sizeof(num3)<<std::endl;
    std::cout<<"num4 is: "<<num4<<" and size of number 4 is: "<<sizeof(num4)<<std::endl;
    std::cout<<"num5 is: "<<num5<<" and size of number 5 is: "<<sizeof(num5)<<std::endl;

    // Why were Literal Suffix needed and can we have our own literal suffix ?
    /*
        Literal suffixes in C++ were introduced to allow developers to create user-defined literals, which enable the creation of custom types that can be used in a natural and expressive way, similar to built-in literals like integers, floats, and strings. This feature was introduced in C++11 as a way to enhance the expressiveness and flexibility of the language.

        Here are some reasons why literal suffixes were introduced and why they are useful:

        1. **Custom Types**: Literal suffixes allow you to define your own types that can be used in a manner similar to built-in types. For example, you can define a custom type for representing physical units (e.g., meters, seconds) and use literal suffixes to create instances of these units in a more readable and intuitive way.

        2. **Improved Readability**: Literal suffixes can improve the readability of code by making it more self-explanatory. For example, instead of writing a function or constructor to create instances of a custom type, you can use a literal suffix that clearly indicates the intended purpose of the value.

        3. **Type Safety**: By defining literal suffixes for custom types, you can ensure that the compiler enforces type safety. This helps prevent unintended conversions or mixing of values with different units or semantics.

        4. **Consistency**: Literal suffixes provide a consistent way to work with custom types, making the codebase more uniform and easier to understand for developers.

        5. **Domain-Specific Languages (DSLs)**: Literal suffixes are particularly useful when creating domain-specific languages within C++. They allow you to define a syntax that is more natural for a specific problem domain, making the code in that domain easier to write and understand.

        6. **Expressiveness**: Literal suffixes make C++ code more expressive, allowing developers to convey the intent of the code more clearly. This can lead to more self-documenting code.

        Here's a simple example to illustrate the use of literal suffixes:

        ```cpp
        // Define a custom type for representing distances in meters
        class Meter {
        public:
            explicit Meter(double value) : value_(value) {}
            double getValue() const { return value_; }

        private:
            double value_;
        };

        // Define a literal suffix for meters
        Meter operator "" _m(long double value) {
            return Meter(static_cast<double>(value));
        }

        int main() {
            // Use the custom literal suffix to create a Meter object
            Meter distance = 10.5_m;

            // Use the Meter object
            double value = distance.getValue(); // 10.5

            return 0;
        }
        ```

        In this example, the `10.5_m` literal is used to create a `Meter` object, providing a clear and intuitive way to represent distances in meters.

        Overall, literal suffixes in C++ provide a way to extend the language's expressiveness and make it more suitable for a wider range of programming tasks, especially those involving custom types and domain-specific requirements.
    */

}