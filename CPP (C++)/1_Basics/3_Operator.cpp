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

    2. Relational Operators:
    - `==` (Equal to)
    - `!=` (Not equal to)
    - `<` (Less than)
    - `>` (Greater than)
    - `<=` (Less than or equal to)
    - `>=` (Greater than or equal to)
    - `<=>` (3 Way Compirision)

    3. Logical Operators:
    - `&&` (Logical AND)
    - `||` (Logical OR)
    - `!` (Logical NOT)

    4. Assignment Operators:
    - `=` (Assignment)
    - `+=` (Addition assignment)
    - `-=` (Subtraction assignment)
    - `*=` (Multiplication assignment)
    - `/=` (Division assignment)
    - `%=` (Modulus assignment)
    - `=` (Bitwise OR assignment)
    - `&=` (Bitwise AND assignment)
    - `^=` (Bitwise XOR assignment)
    - `<<=` (Left shift assignment)
    - `>>=` (Right shift assignment)

    5. Increment and Decrement Operators:
    - `++` (Increment)
    - `--` (Decrement)

    6. Bitwise Operators:
    - `&` (Bitwise AND)
    - `|` (Bitwise OR)
    - `^` (Bitwise XOR)
    - `~` (Bitwise NOT)
    - `<<` (Left shift)
    - `>>` (Right shift)

    7. Conditional (Ternary) Operator:
    - `? :` (Conditional operator)

    8. Comma Operator:
    - `,` (Comma operator)

    9. Member Access Operators:
    - `.` (Dot operator, used to access class or structure members)
    - `->` (Arrow operator, used to access class or structure members through pointers)

    10. Sizeof Operator:
        - `sizeof` (Used to determine the size in bytes of an expression or data type)

    11. Type Cast Operators:
        - `static_cast<T>(expression)` (Static cast)
        - `dynamic_cast<T>(expression)` (Dynamic cast)
        - `const_cast<T>(expression)` (Const cast)
        - `reinterpret_cast<T>(expression)` (Reinterpret cast)

    12. Pointer Operators:
        - `*` (Dereference operator, used to access the value pointed to by a pointer)
        - `&` (Address-of operator, used to get the address of a variable)

    13. Increment and Decrement Operators (for Pointers):
        - `++` and `--` can also be used with pointers to increment or decrement memory addresses.

    These are the fundamental operators in C++. Each operator has a specific purpose and syntax, and they are used to perform various operations on variables and data in C++ programs.
    _______________________________________________________________


->Operator Precedence

    Higher to lower watch the video in c++ for all the mathematical and other operators that are going to be executed first 
    
    Source
        https://en.cppreference.com/w/cpp/language/operator_precedence

Source
    https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
    https://www.programiz.com/cpp-programming/operators

*/
#include<iostream>

int main ()
{   //____________________________________________
    //          Assignment Operator
    //____________________________________________
    int a{5},b{6};
    
    a = b;  // value of right is put into left basically the value assignment goes from right to left and not the other way around

    std::cout<<"Value of a is: "<<a<<std::endl;

    const int c{7};

    //c = a; // this will throw an error coz c is constant integer and is read only

    //100 = a; // this will also not work as 100 is a literal (value) 100 dosent have a location in memory like a,b,c dose
    
    //____________________________________________
    //          Arthmetic Operator
    //____________________________________________

    int num1{200},num2{100},answer{};
    
    std::cout<<num1<<"+"<<num2<<"="<<num1+num2<<std::endl;
    //or
    answer=num1*num2;
    std::cout<<"The result of multiplication of 2 values are: "<<answer<<std::endl;

    //_____________________________________________
    //              Unary Opertor
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



    //_______________________________________________________
    //       Compound Assignment & Bitwise Operator
    //_______________________________________________________

    /*  In the Operator section is the Compound Assignment
        In the Meaning section Bitwise Operator is showcased
        _____________________________________________________________
       |     operator   |       Example      |        Meaning        |
       |________________|____________________|_______________________|
       |       +=       |     lhs += rhs;    |  lhs = lhs + (rhs);   |
       |       -=       |     lhs -= rhs;    |  lhs = lhs - (rhs);   |
       |       *=       |     lhs *= rhs;    |  lhs = lhs * (rhs);   |
       |       /=       |     lhs /= rhs;    |  lhs = lhs / (rhs);   |
       |       &=       |     lhs &= rhs;    |  lhs = lhs & (rhs);   |
       |       >>=      |     lhs >>= rhs;   |  lhs = lhs >> (rhs);  |
       |       <<=      |     lhs <<= rhs;   |  lhs = lhs << (rhs);  |
       |       &=       |     lhs &= rhs;    |  lhs = lhs & (rhs);   |
       |       ^=       |     lhs ^= rhs;    |  lhs = lhs ^ (rhs);   |
       |       |=       |     lhs |= rhs;    |  lhs = lhs | (rhs);   |
       |       ~=       |     lhs ~= rhs;    |  lhs = lhs ~ (rhs);   |
       |________________|____________________|_______________________|

       Example

       a += 1;   // a = a+1;
       a *= b+c; // a = a * (b + c);

       Source:
                https://www.ibm.com/docs/en/i/7.2?topic=operators-compound-assignment
                https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
                https://www.programiz.com/cpp-programming/operators#bitwise
                https://www.youtube.com/watch?v=cy2JF6iFv8k
                https://stackoverflow.com/questions/4854248/why-are-bitwise-shifts-and-used-for-cout-and-cin
    */


    //____________________________________________
    //          Member access operators           
    //____________________________________________
    /*

         ___________________________________________________________________________________________________________________________
        |                   |                   |              |                   Prototype examples (for class T)                 |
        |   Operator Name   |      Synatax      | Overloadable |____________________________________________________________________|
        |                   |                   |              |      Inside class definition      |    Outside class definition    |
        |___________________|___________________|______________|___________________________________|________________________________|
        |                   |       a[b]        |              |      R& T::operator[](S b);       |                                |
        |     subscript     |a[...](since C++23)|     YES      |R& T::operator[](...);(since C++23)|             N/A                |
        |___________________|___________________|______________|___________________________________|________________________________|
        |                   |                   |              |                                   |                                |
        |    indirection    |       *a          |     YES      |        R& T::operator*();         |        R& operator*(T a);      |
        |___________________|___________________|______________|___________________________________|________________________________|
        |                   |                   |              |                                   |                                |
        |    address-of     |       &a          |     YES      |        R* T::operator&();         |        R* operator&(T a);      |
        |___________________|___________________|______________|___________________________________|________________________________|
        |                   |                   |              |                                   |                                |
        |  member of object |       a.b         |     NO       |                N/A                |              N/A               |
        |___________________|___________________|______________|___________________________________|________________________________|
        |                   |                   |              |                                   |                                |
        | member of pointer |       a->b        |     YES      |        R* T::operator->();        |              N/A               |
        |___________________|___________________|______________|___________________________________|________________________________|
        |    Pointer to     |                   |              |                                   |                                |
        |  member of object |       a.*b        |     NO       |                N/A                |              N/A               |
        |___________________|___________________|______________|___________________________________|________________________________|
        |    Pointer to     |                   |              |                                   |                                |
        | member of pointer |       a->*b       |     YES      |        R& T::operator->*(S b);    |     R& operator->*(T a, S b);  |
        |___________________|___________________|______________|___________________________________|________________________________|
    
    Source:
            https://en.cppreference.com/w/cpp/language/operator_member_access
    */   

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
    //          Other C++ Operators          
    //____________________________________________
    /*
        Here's a list of some other common operators available in C++. We will learn about them in later tutorials.

         ___________________________________________________________________________________________________________________________________
        |               |                                                            |                                                      |
        |   Operator    |                      Description                           |                      Example                         |
        |_______________|____________________________________________________________|______________________________________________________|
        |               |                                                            |                                                      |
        |   sizeof      | returns the size of data type                              |  sizeof(int);  //4                                   |
        |_______________|____________________________________________________________|______________________________________________________|
        |               |                                                            |                                                      |
        |      ?:       | returns value based on the condition                       |  string result = (5 > 0) ? "even" : "odd"; //"even"  |
        |_______________|____________________________________________________________|______________________________________________________|
        |               |                                                            |                                                      |
        |      &        | represents memory address of the operand                   |  &num; //address of num                              |
        |_______________|____________________________________________________________|______________________________________________________|
        |               |                                                            |                                                      |
        |      .        | accesses member of struct variables or class objects       |  s1.marks = 92;                                      |
        |_______________|____________________________________________________________|______________________________________________________|
        |               |                                                            |                                                      |
        |      ->       | used with pointers to access the class or struct variable  |  ptr->marks = 92;                                    |
        |_______________|____________________________________________________________|______________________________________________________|
        |               |                                                            |                                                      |
        |      <<       | prints the output value                                    |  cout << 5;                                          |
        |_______________|____________________________________________________________|______________________________________________________|
        |               |                                                            |                                                      |
        |      >>       | gets the input value                                       |  cin >> num;                                         |
        |_______________|____________________________________________________________|______________________________________________________|


        https://www.youtube.com/watch?v=CML5RwadKMo&pp=ygUTaSBuZWVkIG1vcmUgYnVsbGV0cw%3D%3D <- watch this and add more explanation
    
    */


    
}