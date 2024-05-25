/*

-> C++ has a rich set of operators
    In C++, operators are special symbols or keywords that perform operations on one or more operands. Operators can be classified into several categories 
    based on their functionality. Here are the main types of operators in C++:

    1. Arithmetic Operators:
    - `+` (Addition)
    - `-` (Subtraction)
    - `*` (Multiplication)
    - `/` (Division)
    - `%` (Modulus)

    2. Unary / Increment & Decrement Opertor Operators:
    - `++` (Increment)
    - `--` (Decrement)
    - `++` and `--` can also be used with pointers to increment or decrement memory addresses.

    3. Relational Operators:
    - `==` (Equal to)
    - `!=` (Not equal to)
    - `<` (Less than)
    - `>` (Greater than)
    - `<=` (Less than or equal to)
    - `>=` (Greater than or equal to)
    - `<=>` (3 Way Compirision)

    4. Logical Operators:
    - `&&` (Logical AND)
    - `||` (Logical OR)
    - `!` (Logical NOT)

    5. Bitwise Operators:
    - `&` (Bitwise AND)
    - `|` (Bitwise OR)
    - `^` (Bitwise XOR)
    - `~` (Bitwise NOT)
    - `<<` (Left shift)
    - `>>` (Right shift)

    6. Assignment Operators:
    - `=` (Assignment)
    - `+=` (Addition assignment)
    - `-=` (Subtraction assignment)
    - `*=` (Multiplication assignment)
    - `/=` (Division assignment)
    - `%=` (Modulus assignment)
    - `&=` (Bitwise AND assignment)
    - `|=` (Bitwise OR assignment)
    - `^=` (Bitwise XOR assignment)
    - `<<=` (Bitwise Left shift assignment)
    - `>>=` (Bitwise Right shift assignment)

    7. Conditional (Ternary) Operator:
    - `? :` (Conditional operator)

    8. Comma Operator:
    - `,` (Comma operator)

    9. Member Access Operators:
    - `.` (Dot operator, used to access class or structure members)
    - `->` (Arrow operator, used to access class or structure members through pointers)

    10. Scope Resolution Operator
    - `::`

    11. Pointer/Address Operators:
    - `*` (Dereference operator, used to access the value pointed to by a pointer)
    - `&` (Address-of operator, used to get the address of a variable)


    In C++, sizeof() and others below are not a function, but an operator. It returns the size in bytes of its operand. This operator 
    doesn't have a "definition" in the traditional sense, as it's part of the language itself rather than being implemented 
    as a function. The size of a type or expression is determined by the compiler based on the platform and the type of the operand.

    However, if you're curious about how sizeof() works internally, it's typically implemented by the compiler, which determines 
    the size of types during compilation based on the target architecture and data model. The compiler knows the size of 
    each data type and computes it during compilation. This information is then used to replace sizeof() expressions with 
    the appropriate size values in the generated machine code.

    12. Sizeof Operator:
        - `sizeof` (Used to determine the size in bytes of an expression or data type)

    13. Type Cast Operators:
        - `static_cast<T>(expression)` (Static cast)
        - `dynamic_cast<T>(expression)` (Dynamic cast)
        - `const_cast<T>(expression)` (Const cast)
        - `reinterpret_cast<T>(expression)` (Reinterpret cast)

    14. Memory Allocate/Deallocate Operator
        - `new` - used to Allocate memory in C++
        - `delete` - used to Deallocate memory in C++
        on the other hand malloc is a function which is from C its not a operator
        
        

    These are all the fundamental operators in C++. Each operator has a specific purpose and syntax, and they are used to perform various operations on variables and data in C++ programs.
    _______________________________________________________________


->Operator Precedence

    Operator precedence in C++ determines the order in which operators are evaluated in an expression. Operators with higher precedence are 
    evaluated before operators with lower precedence. Here's a summary of the operator precedence in C++ from highest to lowest:

    1. Scope resolution operator (::)
    2. Postfix increment/decrement (++, --)
    3. Function call ()
    4. Array subscripting []
    5. Member selection through pointer (->)
    6. Member selection (.)
    7. Type cast (e.g., static_cast<>, dynamic_cast<>, etc.)
    8. Multiplication, division, and modulus (*, /, %)
    9. Addition and subtraction (+, -)
    10. Bitwise left and right shift (<<, >>)
    11. Relational operators (<, <=, >, >=)
    12. Equality operators (==, !=)
    13. Bitwise AND (&)
    14. Bitwise XOR (^)
    15. Bitwise OR (|)
    16. Logical AND (&&)
    17. Logical OR (||)
    18. Conditional ternary operator (?:)
    19. Assignment operators (=, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=)
    20. Comma operator (,)

    Remember, parentheses can be used to explicitly specify the order of evaluation, overriding the default precedence.
    Source
        https://en.cppreference.com/w/cpp/language/operator_precedence

    Source
        https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
        https://www.programiz.com/cpp-programming/operators

*/
#include<iostream>
#include<cmath>     //used for fmod()
using namespace std;

int main ()
{   //____________________________________________
    //          Arthmetic Operator
    //____________________________________________

    int num1{200},num2{100},answer{};
    
    std::cout<<num1<<"+"<<num2<<"="<<num1+num2<<std::endl;
    //or
    answer=num1*num2;
    std::cout<<"The result of multiplication of 2 values are: "<<answer<<std::endl;

    // Modulus Operator % - We can only do whole numbers with it if you want to still do floating point operations with modulus use std::fmod(x,y)
    // In maths % was defined to be used with whole numbers
    double x = 6.3;
    int y = 2;
    double z = std::fmod(x,y);

    //_____________________________________________
    //    Unary / Increment & Decrement Opertor
    //_____________________________________________

    /* Increment operator ++
       Decrement operator --

       Increments or decrements its operand by 1
       Can be used with integers,floating point types and pointers

       Prefix  ++num
       Postfix num++

       Don't overuse this operator!
       ALERT!! Never use this twice for the same variable in the same statement!!
    */

    int counter (10);
    int result {0};

    //Example 1 - Simple increment
    std::cout<<"Counter: "<<counter<<std::endl;

    counter=counter+1;
    std::cout<<"Counter: "<<counter<<std::endl;

    counter++;
    std::cout<<"Counter: "<<counter<<std::endl;

    ++counter;
    std::cout<<"Counter: "<<counter<<std::endl<<std::endl;

    //Example 2 - Preincrement
    counter=10;
    result=0;

    std::cout<<"Counter2: "<<counter<<std::endl;

    result=++counter; // ++ before counter means the value will be increased by 1 first and then it will be put into result as answer
    std::cout<<"Counter2: "<<counter<<std::endl;
    std::cout<<"Result2: "<<result<<std::endl<<std::endl;

    //Example 3 - Postincrement
    counter=10;
    result=0;

    std::cout<<"Counter3: "<<counter<<std::endl;

    result=counter++; // ++ after counter means the value will be put into result first and after that it will be increased by 1 for further use
    std::cout<<"Counter3: "<<counter<<std::endl;
    std::cout<<"Result3: "<<result<<std::endl<<std::endl;

    //Example 4
    counter=10;
    result=0;

    std::cout<<"Counter4: "<<counter<<std::endl;

    result=++counter+10; // ++ after counter means the value will be put intu result first and after that it will be increased by 1 for further use
    std::cout<<"Counter4: "<<counter<<std::endl;
    std::cout<<"Result4: "<<result<<std::endl<<std::endl;

    //Example 5
    counter=10;
    result=0;

    std::cout<<"Counter5: "<<counter<<std::endl;

    result=counter++ + 10; // ++ after counter means the value will be put intu result first and after that it will be increased by 1 for further use
    std::cout<<"Counter5: "<<counter<<std::endl;
    std::cout<<"Result5: "<<result<<std::endl<<std::endl;
    
    //Example 6 Never Do This!!
    counter=10;
    result=0;

    std::cout<<"Counter6: "<<counter<<std::endl;

    result=++counter + counter++ ; // ++ after counter means the value will be put intu result first and after that it will be increased by 1 for further use
    std::cout<<"Counter6: "<<counter<<std::endl;
    std::cout<<"Result6: "<<result<<std::endl<<std::endl;

    //Example 7 - Pointer Example
    int arr1[] = {1, 2, 3, 4, 5};
    int *ptr1 = arr1; // pointer points to the first element of arr
    ptr1++; // now ptr points to the second element of arr which is 2

    //Example 7.1 - Pointer Decrement
    int arr2[] = {1, 2, 3, 4, 5};
    int *ptr2 = &arr2[3]; // pointer points to the fourth element of arr which is 4
    ptr2--; // now ptr points to the third element of arr which is 3

    //____________________________________________
    //      Relational/Comparision Operators
    //____________________________________________

    /* 
       == means equal to
       != means not equal
       >  means Greater than
       <  means Less than
       >= means Greater than or Equal to
       <= means Less than or Equal to
       <=> Spaceship Operator C++20
    */

    bool equal_result {false};
    bool not_equal_result{false};

    int num3{},num4{};

    std::cout<<std::boolalpha;  // will display true/false instead of 1/0 for booleans for all the values below it  https://www.cplusplus.com/reference/ios/boolalpha/

    std::cout<<"Testing For Equality"<<std::endl;
    std::cout<<"Enter two integers seprated by space: ";
    std::cin>>num3>>num4;
    equal_result=(num3 == num4);
    not_equal_result=(num3 != num4);
    std::cout<<"Comparision result(equals): "<<equal_result<<std::endl;
    std::cout<<"Comparasion result(not equals): "<<std::boolalpha<<not_equal_result<<std::endl;

    
    int num5{},num6{};

    std::cout<<"Calculating if integers are Big or Small or Equal"<<std::endl;
    std::cout<<"Enter 2 integers seprated by space: "<<std::endl;
    std::cin>>num5>>num6;

    std::cout<<num5<<" > "<<num6<<" : "<<(num5 > num6)<<std::endl;
    std::cout<<num5<<" < "<<num6<<" : "<<(num5 < num6)<<std::endl;
    std::cout<<num5<<" >= "<<num6<<" : "<<(num5 >= num6)<<std::endl;
    std::cout<<num5<<" <= "<<num6<<" : "<<(num5 <= num6)<<std::endl<<std::endl;

    //! Spaceship Operator (3 way Comparision) (C++20 or above compiler needed)
   /*
    In C++, the term "spaceship operator" refers to the three-way comparison operator, which was introduced in C++20. It is officially known as 
    the "three-way comparison operator" and is represented by the symbol `<=>`. The purpose of this operator is to simplify the process of comparing 
    two objects and determining whether one is less than, equal to, or greater than the other.

    Here's how the spaceship operator works:

    1. When you use the `<=>` operator between two objects, it returns a special type called `std::strong_ordering`, which can have one of three values:
    - `std::strong_ordering::less` if the left operand is less than the right operand.
    - `std::strong_ordering::equal` if the left operand is equal to the right operand.
    - `std::strong_ordering::greater` if the left operand is greater than the right operand.

    2. You can use the result of the spaceship operator in conditions, such as `if` statements or sorting algorithms, to perform comparisons more efficiently and concisely.

    Here's an example of how you might use the spaceship operator in C++:

    ->Example 1
    #include <iostream>
    #include <compare>

    int main() {
        int a = 5;
        int b = 10;

        auto result = a <=> b;

        switch (result) {
            case std::strong_ordering::less:
                std::cout << "a is less than b" << std::endl;
                break;
            case std::strong_ordering::equal:
                std::cout << "a is equal to b" << std::endl;
                break;
            case std::strong_ordering::greater:
                std::cout << "a is greater than b" << std::endl;
                break;
        }

        return 0;
    }

    -> Example 2
    #include <compare>

    class MyClass {
    public:
        int value;

        // Define the spaceship operator for MyClass
        auto operator<=>(const MyClass& other) const {
            return value <=> other.value;
        }
    };

    int main() {
        MyClass a{5};
        MyClass b{10};

        // Compare two instances of MyClass using the spaceship operator
        if (a <=> b == std::strong_ordering::less) {
            std::cout << "a is less than b" << std::endl;
        } else if (a <=> b == std::strong_ordering::equal) {
            std::cout << "a is equal to b" << std::endl;
        } else {
            std::cout << "a is greater than b" << std::endl;
        }

        return 0;
    }
    ```

    In this example, `MyClass` defines the spaceship operator (`operator<=>`) to compare instances based on their `value` member. 
    The result of the comparison is used to determine whether `a` is less than, equal to, or greater than `b`.

    when you overload an operator for a class, the object on the left-hand side of the operator (the caller) is used to initiate the 
    overload, and the object on the right-hand side (the argument) is passed to the operator function as one of its parameters.

    Keep in mind that the spaceship operator simplifies comparison code and can be especially useful when you need to compare objects
    in custom data types or when implementing sorting algorithms. It is one of the notable features introduced in C++20 to improve code readability and maintainability.
    */

    //____________________________________________
    //            Logical Operators
    //____________________________________________

    /*  name meaning    syntax

        not(negation) = !
        and(logical and) = &&
        or(logical or) = ||

        _____________________________________
       |  expression a    |    not a !a      |
       |__________________|__________________|
       |     true         |      false       |
       |     false        |      true        |
       |__________________|__________________|
        __________________________________________________________
       |  expression a    |   expression b   |      a and b       |
       |__________________|__________________|______a &&  b_______|
       |     true         |      true        |        true        |
       |     true         |      false       |        false       |
       |     false        |      true        |        false       |
       |     false        |      false       |        false       |
       |__________________|__________________|____________________|
        __________________________________________________________
       |  expression a    |   expression b   |      a  or  b      |
       |__________________|__________________|______a  ||  b______|
       |     true         |      true        |        true        |
       |     true         |      false       |        true        |
       |     false        |      true        |        true        |
       |     false        |      false       |        false       |
       |__________________|__________________|____________________|

       Examples:

       num1 >= 10 && num1 < 20
       num1 <= 10 || num1 >= 20

       !is_raining && temperature > 32.0   // is not raining and temp is above 32.0

       is_raining || is_snowing

       temperature > 100 && is_humid || is_raining

       Short-circuit Evaluation:
       - When evaluating a logical expression C++ stops as soon as the result is known
         expr1 && expr2 && expr3
         expr1 || expr2 || expr3

    */

    int num7{};
    const int lower1{10};
    const int upper1{20};

    //Determine if an entered integer is between two other integers
    // as lower < upper as mentioned above
    std::cout<<"Logical Operators "<<std::endl;

    std::cout<<"Enter an integer - the bounds are "<< lower1 <<" and "<< upper1<<" : ";
    std::cin>>num7;

    bool within_bounds {false};

    within_bounds = (num7 > lower1 && num7 < upper1);
    std::cout<<num7<<" is between "<<lower1<<" and "<<upper1<<" : "<<within_bounds<<std::endl;
        
    //____________________________________________
    //            Bitwise Operator
    //____________________________________________

    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011

    // Bitwise AND
    cout << (a & b) << endl;  // Output: 1 (binary: 0001)

    // Bitwise OR
    cout << (a | b) << endl;  // Output: 7 (binary: 0111)

    // Bitwise XOR
    cout << (a ^ b) << endl;  // Output: 6 (binary: 0110)

    // Bitwise NOT
    cout << (~a) << endl;     // Output: -6 (binary: 11111010 in two's complement)

    // Left Shift
    cout << (a << 1) << endl; // Output: 10 (binary: 1010)

    // Right Shift
    cout << (a >> 1) << endl; // Output: 2 (binary: 0010)


    //____________________________________________
    //          Assignment Operator
    //____________________________________________
   
    /*Take Note:
        int a = 10;
        const int c{7};
        c = a; // this will throw an error coz c is constant integer and is read only
        100 = a; // this will also not work as 100 is a literal (value) 100 dosent have a location in memory like a,b,c dose


      Source:
                https://www.ibm.com/docs/en/i/7.2?topic=operators-compound-assignment
                https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
                https://www.programiz.com/cpp-programming/operators#bitwise
                https://www.youtube.com/watch?v=cy2JF6iFv8k
                https://stackoverflow.com/questions/4854248/why-are-bitwise-shifts-and-used-for-cout-and-cin
    */
    
    // = (assignment)
    int num = 10;
    cout << "After =: " << num << endl;

    // += (Addition assignment)
    num += 5;
    cout << "After +=: " << num << endl;

    // -= (Subtraction assignment)
    num -= 3;
    cout << "After -=: " << num << endl;

    // *= (Multiplication assignment)
    num *= 2;
    cout << "After *=: " << num << endl;

    // /= (Division assignment)
    num /= 4;
    cout << "After /=: " << num << endl;

    // %= (Modulus assignment)
    num %= 3;
    cout << "After %=: " << num << endl;

    // &= (Bitwise AND assignment)
    num &= 3;
    cout << "After &=: " << num << endl;

    // |= (Bitwise OR assignment)
    num |= 5;
    cout << "After |=: " << num << endl;

    // ^= (Bitwise XOR assignment)
    num ^= 6;
    cout << "After ^=: " << num << endl;

    // <<= (Bitwise Left shift assignment)
    num <<= 2;
    cout << "After <<=: " << num << endl;

    // >>= (Bitwise Right shift assignment)
    num >>= 1;
    cout << "After >>=: " << num << endl;

    //____________________________________________
    //       Conditional (Ternary) Operator
    //____________________________________________
    /*  
        !Example 1
        int number = 10;
        string result = (number % 2 == 0) ? "Even" : "Odd";
        
        cout << "The number is " << result << endl;

        !Example 2
        int score = 75;
        string grade = (score >= 90) ? "A" : (score >= 80) ? "B" : (score >= 70) ? "C" : "F";
            
        cout << "Your grade is: " << grade << endl;
    */

    //____________________________________________
    //              Comma Operator
    //____________________________________________
    /*  
        1. Multiple Declarations/Initialization: It can be used to declare or initialize multiple variables in a single statement.
        !Example
        int a = 5, b = 10, c = 15;

        2. For Loop: It's often used in the initialization, condition, and update parts of a for loop.
        !Example
        for (int i = 0, j = 10; i < j; ++i, --j) {
            // Loop body
        }

        3. Function Arguments: It can be used to separate arguments in a function call.
        !Example
        func(arg1, arg2, arg3);

        4. Expression Evaluation: It's useful when multiple expressions need to be evaluated, and only the result of the last one is needed.
        !Example
        int result = (a++, b++, a + b); // Increments a and b, returns the sum of a and b

        5. Chaining Member Access: It's used to chain multiple member access operations.
        !Example
        struct Foo {
            int x;
            int y;
        };

        Foo foo = {5, 10};
        int sum = (foo.x, foo.y); // Accesses foo.x, then foo.y

        6. Returning Multiple Values (less common): While not recommended due to potential confusion, it can be used to return multiple values from a function. However, only the value of the rightmost expression is returned.
        !Example 1 - Where a & b both are evaluated in a sequences(left to right evaluation) and the right most expression is returned.
        int func() {
            int a = 5, b = 10;
            return a, b;
        }

        !Example 2 - Now similar as above but as first expression in result is setting the value of b to be 11 and in the second expression which is just b and is also the right most expression and that is returned so the output of b now is 11.
        int func() {
            int a = 5, b = 10;
            return b=11, b; // Returns b where value of b is 11
        }

        !Example 3 - Where we are calculating something os it also gets processed. We can use many expression with the use of comma and all will be evaluated but only the right most one will be returned and all the previsous expression can alter the result as you can see.
        int func() {
            int a = 5, b = 10;
            return b=a+b+5, a=b+10, b; // Returns b where value of b is 20
        }

        !Example 4 - When we assign func() to result object the Pair fucntion returns object that object dosent have specific name within the scope of function its just a temporary object created on the fly which holds value of a and b.
        class Pair {
            public:
                int first;
                int second;
        };

        //here function returns an temporary no name object of type Pair which is a class.
        Pair func() {
            int a = 5, b = 10;
            return {a, b};
        }

        //above function can also be written as this to understand better that a nameless object is created on the fly by compiler within the function scope. this is to understand it bettr whats happening.
        //But here we are returning a named object.
        Pair func()2 {
            int a = 5, b = 10;
            Pair myPair = {a, b};
            return myPair;
        }

        int main() {
            Pair result = func();
            std::cout << "First value: " << result.first << std::endl;
            std::cout << "Second value: " << result.second << std::endl;
            return 0;
        }
    */

    //____________________________________________
    //          Member access operators           
    //____________________________________________
    /*
        - `.` (Dot operator, used to access class or structure members)
        - `->` (Arrow operator, used to access class or structure members through pointers)

    */

    //____________________________________________
    //          Scope Resolution Operators           
    //____________________________________________
    
    /* Check 3.2_Scope_Resolution_Operator.cpp for more detail*/
    
    //____________________________________________
    //          Pointer/Address Operators           
    //____________________________________________

    int num8 = 5; // Declare an integer variable
    int *ptr;    // Declare a pointer to an integer
    ptr = &num8;  // Assign the address of 'num' to the pointer 'ptr'


    //____________________________________________
    //          sizeof/type cast Operators           
    //____________________________________________

    int num9 = 10;
    double dbl = 5.5;
    char ch = 'A';

    // Sizeof Operator
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of num: " << sizeof(num9) << " bytes" << std::endl;
    std::cout << "Size of dbl: " << sizeof(dbl) << " bytes" << std::endl;
    std::cout << "Size of ch: " << sizeof(ch) << " byte" << std::endl;

    // Type Cast Operators
    double result1 = static_cast<double>(num9); // Static Cast
    int result2 = static_cast<int>(dbl); // Static Cast
    int* ptr3 = reinterpret_cast<int*>(&num); // Reinterpret Cast

    std::cout << "Static Cast - int to double: " << result1 << std::endl;
    std::cout << "Static Cast - double to int: " << result2 << std::endl;
    std::cout << "Reinterpret Cast - Address of num: " << ptr3 << std::endl;

    //____________________________________________
    //    Memory Allocate/Deallocate Operator          
    //____________________________________________
    int *ptr4 = new int; // Allocate memory for an integer
    cout<< &ptr4;        // Tells the memory address of an object
    delete ptr4;        // Deallocate memory pointed to by ptr   
}