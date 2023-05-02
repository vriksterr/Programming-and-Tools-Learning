/*

-> C++ has a rich set of operators
        •Unary Opertor      ++,--

        •Binary Operator    + , -, *, /, %         (Arithmetic Operator)
                            <, <=, >, >=, ==, !=   (Relational Operator)
                            &&, ||, !              (Logical Operator)
                            &, |, <<, >>, ~, ^     (Bitwise Operator)
                            =, +=, -=, *=, /=, %=  (Assignment Operator)

        •Ternary            ?:  (Ternary/Conditional Operator)  //See 6_Controll_Program_Flow.cpp for more examples its not coverd here.
     
    
-> Common operators can be grouped as follows:
    •Assignment-> By assigning a new value eg a=1
    •Arthmetic-> They are used to perform mathematical operations on operands eg 2*5 and + - * / % (modulo or remainder works only with integers)
    •Unary Opertor -> Part of them work like an assignment and part of them work like arthmetic.
    •Relational/Comparision-> They allow you to compare the values of two objects. eg. = != > < <= >= <=>
    •Logical-> They are used to test for logical or Boolean conditions. eg- if you you want to execute a specific statement when the temp is above or below a certain point ( not, and, or)
    •Compound Assignment-> The compound assignment operators consist of a binary operator and the simple assignment operator. They perform the operation of the binary operator on both operands and store the result of that operation into the left operand, which must be a modifiable lvalue.
    •Bitwise Operator-> These are used to perform operations on individual bits. They can only be used alongside char and int data types.
    •Member Access-> These operaters are used to access memebers eg. array subscript operator [] it allows you to access to a specific memeber data.at(0) for vetor or cout<<data[0] for array
    •Other-> Operators that dont fit very well in the above operators
    _______________________________________________________________


->Operator Precedence

    Higher to lower watch the video in c++ for all the mathematical and other operators that are going to be executed first 
    
    Source
        https://en.cppreference.com/w/cpp/language/operator_precedence


Source
    https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/

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



    //__________________________________________________________________
    //       Compound Assignment Operators & Bitwise Operator
    //__________________________________________________________________

    /*
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
    
    */
    
}