/*

    **********************
    * Structs vs Classes *
    **********************

    •In addition to define a class we can declare a struct
    
    •struct comes from the C programming language
    
    • Essentially the same as a class expect
        • struct members are public by default
        • class members  are private by default

     _________________________
    | Some general guidelines |
    |_________________________|

    struct
        • Use struct for passive objects with public access 
        • Don't declare methods in struct
    class
        • Use class for active objects with private access 
        • Implement getters/setters as needed 
        • Implement member methods as needed

Just USE class instead of struct

*/

#include<iostream>
using namespace std;

//Class

class Person{
    string name;
    string get_name2(){
        return name;
    };
};

//Struct

struct Person2 {
std::string name2;
std::string get_name2 (); // Why if name is public? 
};

int main(){
    //CLASS
    Person p;
    p.name ="Frank";    // compiler error - private
    cout<<p.get_name();   //compiler error - private
    
    //STRUCT
    Person2 p2; 
    p2.name2 = "Frank"; // OK - public 
    std::cout << p2.get_name2 (); // OK - public
}