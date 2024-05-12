/*
    ********************
    * Datatypes in C++ *
    ********************
         ______________________________
        | Understanding Binary System |
        |_____________________________|
        Before we jump into Datatypes lets first understand what this data even is in computers?
            -Data inside computer is stored as 0 & 1 nothing else
        Now you might wonder how dose computer makes sense if a set of 0's and 1's mean something?
            -In mathematics this binary data is also called base 2 representation meaning only 2 types of numbers 0 or 1 for eg. 100101 = 1*2^5 + 0*2^4 + 0*2^3 + 1*2^2 + 0*2^1 + 1*2^0
            a base 10 will be represed as such for eg. 2371 = 2*10^3 + 3*10^2 + 7*10^1 + 1*10^0
            you can use a programmer calculator and check what a binary number represents

        Now you can use these bits and group them to represents a number 
            -3 bits: Each group of 3 bits can represent decimal numbers from 0 to 7 eg. 
             ______________________
            |__Binary__|__Decimal_|
            |    000   |     0    |
            |    001   |     1    |
            |    010   |     2    |
            |    011   |     3    |
            |    100   |     4    |
            |    101   |     5    |
            |    110   |     6    |
            |    111   |     7    |
            |__________|__________|
            inside memory:  011 011 100 011 000 011 110 001
            will represent:  3   3   4   3   0   3   6   1

            -4 bits: Each group of 4 bits can represent decimal numbers from 0 to 15 eg.
             ______________________
            |__Binary__|__Decimal_|
            |   0000   |     0    |
            |   0001   |     1    |
            |   0010   |     2    |
            |   0011   |     3    |
            |   0100   |     4    |
            |   0101   |     5    |
            |   0110   |     6    |
            |   0111   |     7    |
            |   1000   |     8    |
            |   1001   |     9    |
            |   1010   |    10    |
            |   1011   |    11    |
            |   1100   |    12    |
            |   1101   |    13    |
            |   1110   |    14    |
            |   1111   |    15    |
            |__________|__________|

            -Same way we can increase the pairing to 64 bits and represent even more things like letters and more.
             _________________________________
            |___Digits(Bits)__|__Data Range__|
            |        1        |    0 ~ 1     |
            |        2        |    0 ~ 3     |
            |        3        |    0 ~ 7     |
            |        4        |    0 ~ 15    |
            |        5        |    0 ~ 31    |
            |       ..        |     ...      |
            |        n        |    0 ~ 2^n-1 |
            |_________________|______________|
                
             _____________________________________________________________
            |___Digits(Bits)__|__Bytes__|___________Data Range___________|
            |        8        |    1    |            0 ~ 255             |
            |        16       |    2    |            0 ~ 65,535          |
            |        32       |    4    |            0 ~ 34,359,738,367  |
            |        64       |    8    | 0 ~ 18,446,744,073,709,551,615 |
            |_________________|_________|________________________________|

         ___________________________________
        | Understanding Hexadecimal System |
        |__________________________________|
        The hexadecimal system is a base-16 number system used in computing and mathematics. It is often used as a convenient way to represent binary numbers in a more compact and human-readable format. 
        In hexadecimal, numbers are represented using sixteen symbols: 0-9 for values 0 to 9, and A-F for values 10 to 15.
         __________________________________________
        |_Binary (4 bits)_|_Decimal_|_Hexadecimal_|
        | 0000            | 0       | 0           |
        | 0001            | 1       | 1           |
        | 0010            | 2       | 2           |
        | 0011            | 3       | 3           |
        | 0100            | 4       | 4           |
        | 0101            | 5       | 5           |
        | 0110            | 6       | 6           |
        | 0111            | 7       | 7           |
        | 1000            | 8       | 8           |
        | 1001            | 9       | 9           |
        | 1010            | 10      | A           |
        | 1011            | 11      | B           |
        | 1100            | 12      | C           |
        | 1101            | 13      | D           |
        | 1110            | 14      | E           |
        | 1111            | 15      | F           |
        |_________________|_________|_____________|
        In this table:
            •Each row represents a 4-bit binary number.
            •The "Decimal" column shows the decimal equivalent of each binary number.
            •The "Hexadecimal" column shows the hexadecimal representation of each binary number.
        Example:-
        Hexadecimal: 0x3A7F

        To understand this number better:

        Each digit in a hexadecimal number represents 4 bits (a nibble) in binary.
        "0x" before a hexadecimal number is a common notation to indicate that the following characters represent a hexadecimal value.
        The first digit '3' represents the binary number 0011.
        The second digit 'A' represents the binary number 1010.
        The third digit '7' represents the binary number 0111.
        The fourth digit 'F' represents the binary number 1111.
        Putting it all together:

        3A7F in hexadecimal is equivalent to 0011 1010 0111 1111 in binary.
        In decimal, 3A7F is equal to 14975.

         __________________________________________
        |_Binary_(8 bits)_|_Decimal_|_Hexadecimal_|
        | 00000000        | 0       | 0           |
        | 00000001        | 1       | 1           |
        | 00000010        | 2       | 2           |
        | 00000011        | 3       | 3           |
        | 00000100        | 4       | 4           |
        | 00000101        | 5       | 5           |
        | 00000110        | 6       | 6           |
        | 00000111        | 7       | 7           |
        | 00001000        | 8       | 8           |
        | 00001001        | 9       | 9           |
        | 00001010        | 10      | A           |
        | 00001011        | 11      | B           |
        | 00001100        | 12      | C           |
        | 00001101        | 13      | D           |
        | 00001110        | 14      | E           |
        | 00001111        | 15      | F           |
        | 00010000        | 16      | 10          |
        |   ...           | ...     | ...         |
        | 11111111        | 255     | FF          |
        |_________________|_________|_____________|

         _____________________________
        | Understanding Octal System |
        |____________________________|
        The octal system, also known as base-8, is a number system that uses eight digits: 0, 1, 2, 3, 4, 5, 6, and 7. Each position in an octal number represents 
        a power of 8, just as each position in a decimal number represents a power of 10.

        1. **Digits:**
        - Octal numbers use digits 0-7. Once you reach 7, the next number is represented as 10 in octal (which is equivalent to 8 in decimal), similar to how in decimal, after 9 comes 10.
        - The digits in octal are 0, 1, 2, 3, 4, 5, 6, 7.

        2. **Conversion:**
        - To convert an octal number to decimal, you multiply each digit by the corresponding power of 8 based on its position, starting from the rightmost digit.
        - For example, the octal number 247 can be converted to decimal as \( 2 \times 8^2 + 4 \times 8^1 + 7 \times 8^0 = 2 \times 64 + 4 \times 8 + 7 \times 1 = 128 + 32 + 7 = 167 \).

        3. **Representation:**
        - In programming languages, octal numbers are often represented with a leading zero, like 0247, to differentiate them from decimal numbers.
        - For example, in Python or C programming languages, numbers prefixed with a '0' are considered octal.

        4. **Usage:**
        - Octal numbers were more commonly used in older computing systems because of their direct relationship with binary numbers (3 octal digits correspond to exactly 3 binary digits, or bits).
        - Nowadays, octal is less frequently used in general computing and programming, with hexadecimal being more common for representing binary values compactly.

        Overall, the octal system is a base-8 number system that represents numbers using digits 0-7 and is based on powers of 8. It has been largely replaced by hexadecimal in modern computing due to 
        its more compact representation of binary values.

    C++ provides a wide range of data types to represent different kinds of values, from integers and floating-point numbers to characters and custom-defined types. 
    Here are some of the common data types in C++:

    1. **Fundamental Data Types:**
    - `int`: Represents integers.
    - `char`: Represents a single character.
    - `float`: Represents single-precision floating-point numbers.
    - `double`: Represents double-precision floating-point numbers.
    - `bool`: Represents Boolean values (`true` or `false`).
    - `void`: Represents typeless meaning there is no type its just void.
    - `auto`: Represents auto detection what is the type of data and assign it accordingly.

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

#include <iostream>
    using namespace std;

    int main() {

        //representing Decimal,Octal,Hex,Binary in C++
        int number_decimal = 15;    //Decimal
        int number_octal = 017;     //Octal where 0 represents that its a octal representation
        int number_hexadecimal = 0x0f;  //Hexadecimal where 0x represents that its a hex representation
        int number_binary = 0b00001111; //Binary - C++14 where 0b represents that its a binary representation
        bool bool_true_hex = 0x01;  //Representing True in Hex
        bool bool_false_hex = 0x00; //Representing False in Hex

        cout << "Decimal: " << number_decimal << endl;
        cout << "Octal: " << number_octal << endl;
        cout << "Hexadecimal: " << number_hexadecimal << endl;
        cout << "Binary: " << number_binary << endl;
        cout << "Boolean true in hex: " << bool_true_hex << endl;
        cout << "Boolean false in hex: " << bool_false_hex << endl<<endl;

        //representing different values
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