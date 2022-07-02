/*      
       ***********************
       * Function Overloading*
       ***********************

       -We can have functions that have different parameter list that have the same name
       -Abstraction mechanism since we can just think 'print' for example
       
       -A type of polymorphism
            -We can have the same name work with different data types to execute similar behavior

       -The compiler must be able to tell the functions apart based on the parameter list and argument supplied

       Example:-

       int add_numbers(int,int);    //add ints
       double add_numbers(double,double);   //add doubles

       int main(){
                    //Compiler is will see which version to be called from above declaration based on entered value and if it cant find it it will throw an error;
           cout<<add_numbers(10,20);        // when you type just integers then the compiler calls the int version of add_numbers
           cout<<add_numbers(10.0,20.0);    // when you type just doubles then the compiler calls the double version of add_numbers
       }


       Example 2:-

       //Return type is not considered

       int get_value();
       double get_value();

       //ERROR

       cout<<get_value()<<endl;     // Which One?? as the compiler dosent know which parameter to call and will show compiler error.

       */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: " ;
    for (auto s: v )
        cout << s + " ";
    cout << endl;
}

int main() {
    print(100);    // int
    print('A');     //  character is always promoted to int should print 65 ASCII ('A')
    
    print(123.5);   // double
    print(123.3F);  // Float is promoted to double
    
    print("C-style string");  // C-style string is converted to a C++ string
    
    string s {"C++ string"};    
    print(s);       // C++ string
    
    print("C-style string", s); // First argument is converted to a C++ string
    
    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    cout << endl;
    return 0;
}

