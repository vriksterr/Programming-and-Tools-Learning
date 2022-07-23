/*

    ***********************************
    * Consturctor Initialization List *
    ***********************************

    IT helps us to initialize the data members to our data values as they are created meaning a and b will 
    have a=5 and b=10 at the time of initilizatin not like a = random value and b = random value at the 
    time of initilization and once the body is executed it will then be initialized to 5 and 10 which 
    is waste of memory as we are once initializing and then assigning a value to it which means more 
    lines of instructions which is slower/inefficient.

    • So far, all data member values have been set in the constructor body
    
    • Constructor initialization lists
        • are more efficient 
        • initialization list immediately follows the parameter list 
        • initializes the data members as the object is created! 
        • order of initialization is the order of declaration in the class

    constructor (argument-list) : initilization-section{

        assignment + other code;
    }


    For Example:

    class Complex{

    int a, b;

public:
      
    Complex(void){      
    a = 10;         //by the time we reach a = 10 the a has already been constructed and initialized to garbage data so what we are doing is assigning a new vaue to it so basically less optimzed 
    b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

    
     ____________________________________
    |Order of Execution initializer list |
    |____________________________________|

    In the initializer list, the order of execution takes place according to the order of declaration of 
    member variables. While using the initializer list for a class in C++, the order of declaration of 
    member variables affects the output of the program.

    Program 1:
                // C++ program to illustrate the
                // order of initializer in list
                #include <iostream>
                using namespace std;

                class MyClass {
                private:
	                // Declared first
	                int b;

	                // Declared Second
	                int a;

                public:
	                MyClass(int value)
		                : b(value), a(b * 2){
		            cout << b << " " << a;
	            }
                };

                // Driver Code
                int main()
                {
	                // Create an object
	                MyClass obj(10);

	                return 0;
                }
    
    Output: 10 20


    Program 2:

                // C++ program to illustrate the
                // order of initializer in list
                #include <iostream>
                using namespace std;

                class MyClass {
                private:
                    // Declared first
                    int a;

                    // Declared Second
                    int b;

                public:
                    MyClass(int value)
                        : b(value), a(b * 2)
                    {
                        cout << b << " " << a;
                    }
                };

                int main()
                {

                    // Create an object
                    MyClass obj(10);

                    return 0;
                }

    Output: 10 65528

    Both the outputs are different because the execution takes place according to the order 
    of declaration:

    • In the first program, b is declared first, so b is assigned the value of 10 and then a is 
      declared, later a is assigned b*2. So, the output is 10 20.
   
    • In the second program, a is declared first and then b.  So, first, a is assigned b*2, 
      but b is not initialized yet. So, some garbage value is assigned to a. Later b is assigned 
      the value of 10.

*/

// Constructor Initialization Lists
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name {"XXXXXXX"};
   int health;
   int xp;
public:
// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

//class_name::class_name()/class member function
Player::Player() 
    : name{"None"}, health{0}, xp{0} {  //as you can see the body is empty as in the old method where initializing and assigning to that is gonna be slower in conparision if we have a large programe 
}                                       //What we are doing is have member datavalues initialize to our values before the constructor body executes
                                        //In this initializer list you should be listing off all the members in order as they are listed in the class private section that is first name second health then xp and not to write it in different order for best practice and some random value is not assigned to the variable at the time of initialization.
Player::Player(std::string name_val) 
   : name{name_val}, health{0}, xp{0} {
}
  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
    
}

int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}