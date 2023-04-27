/*
Overview
-> Expression
    _______________________________________________________________
    Examples:

    34                         //literal
    fav_number                 //variable
    1.5+2.8                    //addition
    2*5                        //multiplication
    a>b                        //relational
    a=b                        //assignment
    _______________________________________________________________
-> Statements and block statements
    _______________________________________________________________
    A statement is:
    -A complete line of code that performs some action
    -Usually terminated with a semi-colon
    -Usually contains expressions
    -C++ has many types of statements
        --expressions, null, compount, selection, iteration, declaration, jump, try blocks, and others
    
    Example:
    int x;                     //declatation
    fav_number=12;             //assignment
    1.5 + 2.8;                 //expression   useless statement as the added numbers are not being used but its still a statement as it still ends with ; semi colon
    x = 2 * 5;                 //assignment
    if (a>b) cout<<"a is greater than b";       // if statement
    ;                          //simple semi-colon statement used at the end of an statement
    _______________________________________________________________
-> Operators
    -Assignment
    -Arthmetic
    -Increment and decrement
    -Equality
    -Relational
    -Logical
    -Compound assignment
    -Precedence
    _______________________________________________________________
    C++ has a rich set of operators
        - unary, binary, ternary
    eg-   -minus  2*5    2*3*5 or conditional operator       
    
    Common operators can be grouped as follows

    -Assignment-> By assigning a new value eg a=1
    -Arthmetic-> They are used to perform mathematical operations on operands eg 2*5 and + - * / %(modulo or remainder works only with integers)
    -Increment-> Part of them work like an assignment and part of them work like arthmetic.
    -Relational-> They allow you to compare the values of two objects. eg. = != > < <= >= <=>
    -Logical-> They are used to test for logical or Boolean conditions. eg- if you you want to execute a specific statement when the temp is above or below a certain point ( not, and, or)
    -Member access-> eg. array subscript operator [] it allows you to access to a specific memeber data.at(0) for vetor or cout<<data[0] for array
    -Other-> Operators that dont fit very well in the above operators
    _______________________________________________________________
*/
#include<iostream>

int main ()
{  //____________________________________________
    // Assignment Operator
    //____________________________________________
    int a{5},b{6};
    
    a = b;  // value of right is put into left basically the value assignment goes from right to left and not the other way around

    std::cout<<"Value of a is: "<<a<<std::endl;

    const int c{7};

    //c = a; // this will throw an error coz c is constant integer and is read only

    //100 = a; // this will also not work as 100 is a literal (value) 100 dosent have a location in memory like a,b,c dose
    
    //____________________________________________
    // Arthmetic Operator
    //____________________________________________

    int num1{200},num2{100},answer{};
    
    std::cout<<num1<<"+"<<num2<<"="<<num1+num2<<std::endl;
    //or
    answer=num1*num2;
    std::cout<<"The result of multiplication of 2 values are: "<<answer<<std::endl;

    //_____________________________________________
    // Increment or Decrement Operator
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
    // Testing For Equality
    //____________________________________________

    /* == means equal to
       != means not equal
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


    //____________________________________________
    // Mixed Type Expression
    //____________________________________________

    /* 
    -C++ operations occur on same type operands
    -If operands are of different types, C++ will convert one
    -Important! since it could affect calculations results
    -C++ will attempt to automatically convert types(coercion). If it can't,a compiler error will occur

    Conversions:

    -Higher vs Lower types are based on the size of the values the type can hold
        -long double,double,double,float,unsigned long,long,unisgned int,int
        -short & char types are always converted to int

    -Type Coercion: conversion of one operand to another data type
    
    -Promotion: conversion to higher type
        -Used in mathematical expression
    
    -Demotion: conversion to a lower type
        -used with assignment to lower type

*/

    int total{};
    int value1{},value2{},value3{};
    const int count{3};
    std::cout<<"Mixed Type Expression Program"<<std::endl;
    std::cout<<"Enter 3 integers seprate by spaces: ";
    std::cin>>value1>>value2>>value3;

    total = value1 + value2 + value3;

    double average{0.0};

    average = static_cast<double>(total)/count; // static_cast<double>(total) will change total from int to double if we dont convert total to double the average anser will come in int coz both total and count are in int so atleast one needs to be double
    //average = (double)total/cout;     //this is old school C cast dont use!

    std::cout<<"The 3 numbers were: "<<value1<<","<<value2<<","<<value3<<std::endl;
    std::cout<<"The sum of the numbers is: "<<total<<std::endl;
    std::cout<<"The average of the numbers is: "<<average<<std::endl<<std::endl;


    //____________________________________________
    //         Renational Operators
    //____________________________________________
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



    //____________________________________________
    //            Compound Assignment
    //____________________________________________

    /*

        _____________________________________________________________
       |     operator   |       Example      |        Meaning        |
       |________________|____________________|_______________________|
       |     +=         |      lhs += rhs;   |  lhs = lhs += (rhs);  |
       |     -=         |      lhs -= rhs;   |  lhs = lhs -= (rhs);  |
       |     *=         |      lhs *= rhs;   |  lhs = lhs *= (rhs);  |
       |     /=         |      lhs /= rhs;   |  lhs = lhs /= (rhs);  |
       |     &=         |      lhs &= rhs;   |  lhs = lhs &= (rhs);  |
       |     >>=        |      lhs >>= rhs;  |  lhs = lhs >>= (rhs); |
       |     <<=        |      lhs <<= rhs;  |  lhs = lhs <<= (rhs); |
       |     &=         |      lhs &= rhs;   |  lhs = lhs &= (rhs);  |
       |     ^=         |      lhs ^= rhs;   |  lhs = lhs ^= (rhs);  |
       |     |=         |      lhs |= rhs;   |  lhs = lhs |= (rhs);  |
       |________________|____________________|_______________________|

       Example

       a += 1;   // a = a+1;
       a *= b+c; // a = a * (b + c);
    */
    //____________________________________________
    //            Operator Precedence
    //____________________________________________

    /*   
       Higher to lower watch the video in c++ for all the mathematical and other operators that are going to be executed first 

       https://en.cppreference.com/w/cpp/language/operator_precedence

    */
}