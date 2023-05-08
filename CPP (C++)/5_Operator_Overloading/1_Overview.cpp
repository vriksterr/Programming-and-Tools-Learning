/*

    ************************
    * Operator Overloading *
    ************************

    Operator overloading in C++ allows operators, such as "+", "-", "*", "/", etc., to be given new meanings when they are used with user-defined types or classes. 
    This makes it possible to write code that can be more expressive and natural, as well as easier to read and maintain.

    To overload an operator in C++, you must provide a special member function that has the operator symbol as its name. This function must take one or two

    C++ requires operator overloading to be done within a class or struct because operator overloading is tightly coupled with object-oriented programming (OOP) concepts, 
    which are the fundamental concepts of C++. 
    C++ is designed to provide a powerful and flexible way of defining user-defined types, allowing programmers to create their own data types with custom behaviors and 
    functionality. Operator overloading is an important feature of C++ that enables users to define custom behavior for operators such as +, -, *, /, and many others.

    By requiring operator overloading to be done within a class or struct, C++ provides several advantages, including:

        1.Encapsulation: Operator overloading functions can be declared as private or protected members of a class or struct, 
                         making them inaccessible to code outside the class. This helps to maintain the integrity of the class and prevent unintended usage and errors.

        2.Polymorphism: Operator overloading functions can be virtual members of a class or struct, allowing them to be overridden by derived classes. 
                        This enables polymorphic behavior, where the same operator can behave differently depending on the object type.

        3.Consistency: By requiring operator overloading to be done within a class or struct, C++ ensures that the same operator always behaves the same way 
                       for a given object type. This helps to avoid confusion and maintain consistency in the behavior of the language.

    Therefore, operator overloading in C++ is tightly coupled with classes and structs because it is a fundamental part of the object-oriented programming paradigm 
    and provides several advantages for designing and implementing user-defined types.


    If you want to overload operators without using a class or struct, you will need to use a functional programming approach or a procedural programming approach instead.

        eg. 
            #include<iostream>

            int add(int a, int b) {
                return a + b;
            }

            int main() {
                int a = 10, b = 20;
                int result = add(a, b); // Call the "add" function using the "+" operator
                std::cout << result << std::endl; // Output: 30
                return 0;
            }


     __________________________________
    | What Operator can be overloaded? |
    |__________________________________|

    • In C++, almost all operators can be overloaded, including:
       1. Arithmetic operators: +, -, *, /, %, ++, --
       2. Relational operators: <, >, <=, >=, ==, !=
       3. Logical operators: !, &&, ||
       4. Bitwise operators: &, |, ^, ~, <<, >>
       5. Assignment operators: =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
       6. Member selection operators: . and ->
       7. Function call operator: ()
       8. Subscript operator: []
       9. Type conversion operator: cast operator

    • The following operators cannot be overloaded
        ::      Scope resolution operator
        :?      Conditional operator
        .*      Pointer to Member operator
        .       Dot operator
        sizeof  sizeof operator

     __________________
    | Some basic rules |
    |__________________|

    • Precedence and Associativity cannot be changed
    • 'arity' cannot be changed (i.e. can't make the division operator unary)
    • Can't overload operators for primitive type (e.g. int, double, etc.)
    • Can't create new operators
    • [], (), ->, and the assignment operator (=) must be declared as member methods
    • Other operators can be declared as member methods or global functions


*/
// Reference for the below example: https://www.youtube.com/watch?v=BnMnozsSPmw
//Operator Overloading
#include<iostream>
#include<string>
#include<list>
using namespace std;

struct YouTubeChannel {     //First Struct
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==(const YouTubeChannel &channel) const{
        return this->Name == channel.Name;
    }
};

ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel) {
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

struct MyCollection {       //Second Struct
    list<YouTubeChannel>myChannels;

    void operator+=(YouTubeChannel &channel) {
        this->myChannels.push_back(channel);
    }
    void operator-=(YouTubeChannel &channel) {
        this->myChannels.remove(channel);
    }
};
ostream &operator<<(ostream &COUT, MyCollection &myCollection) {
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}

int main()
{
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;

    cout << myCollection;
    
    cin.get();
}