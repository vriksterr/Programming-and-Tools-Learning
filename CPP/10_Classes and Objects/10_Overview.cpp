/* 

    ***********************
    * Classes and Objects *
    ***********************
    Class: A class in C++ is the building block that leads to Object-Oriented programming. 
           It is a user-defined data type, which holds its own data members and member functions, 
           which can be accessed and used by creating an instance of that class. 
           A C++ class is like a blueprint for an object.
    
    For Example: 
    Consider the Class of Cars. 
    There may be many cars with different names and brand but all of them will share some common 
    properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, 
    Car is the class and wheels, speed limits, mileage are their properties.

    - A Class is a user defined data-type which has data members and member functions.
    
    - Data members are the data variables and member functions are the functions used 
      to manipulate these variables and together these data members and member functions 
      defines the properties and behavior of the objects in a Class.
    
    - In the above example of class Car, the data member will be speed limit, 
      mileage etc and member functions can be apply brakes, increase speed etc.

    Object: An Object is an instance of a Class. When a class is defined, no memory is 
            allocated but when it is instantiated (i.e. an object is created) memory is allocated.

    Declaring Objects: When a class is defined, only the specification for the object is defined; 
                       no memory or storage is allocated. To use the data and access functions 
                       defined in the class, you need to create objects.

                       ClassName ObjectName;

        
    What all dose a class have lets take a look:

    class ClassName{    //where class is a keyword and ClassName is a user defined name

        Access specifier;   //can be private,public or protected
        Data members;       //Variable to be used
        Default/Userdefined constructor; //starts from 10.7
        Member Function();  //Methods to access data members

    For Example:

    // C++ program to demonstrate
    // accessing of data members

    #include <bits/stdc++.h>
    using namespace std;
    class Geeks
{
	// Access specifier
	public:

	// Data Members
	string geekname;

	// Member Functions()
	void printname()
	{
	cout << "Geekname is: " << geekname;
	}
};

int main() {

	// Declare an object of class geeks
	Geeks obj1;

	// accessing data member
	obj1.geekname = "Abhi";

	// accessing member function
	obj1.printname();
	return 0;
}


    }
     ______________________________________
    | What is Object Oriented Programming? |
    |______________________________________|

    - Procedural Programming
    - Procedural Programming limitations
    - OO Programming concepts and there advantages
    - OO Programming limitations
     ________________________
    | Procedural Programming |
    |________________________|

    - Focus is on process or action that a program takes
    - Programs are typically a collection of functions
    - Data is declared seprately
    - Data is passed as arguments into functions

     ____________________________________
    | Procedural Programming Limitations |
    |____________________________________|

    • Functions need to know the structure of the data.
        • if the structure of the data changes many functions must be changed
    
    • As programs get larger they become more:
        • difficult to understand 
        • difficult to maintain 
        • difficult to extend 
        • difficult to debug 
        • difficult to reuse code 
        • fragile and easier to break

======================================================================================================================
     ______________________________________
    | What is Object Oriented Programming? |
    |______________________________________|

    • Classes and Objects ( it deals with complexity that comes with large projects by providing abstraction )
        • focus is on classes that model real-world domain entities 
        • allows developers to think at a higher level of abstraction 
        • used successfully in very large programs

    • Encapsulation
        • objects contain data AND operations that work on that data 
        • Abstract Data Type (ADT)

    • Information-hiding
        • implementation-specific logic can be hidden 
        • users of the class code to the interface since they don't need to know the implementation 
        • more abstraction • easier to test, debug, maintain and extend

    • Reusability
        • easier to reuse classes in other applications 
        • faster development 
        • higher quality

    • Inheritance
        • can create new classes in term of existing classes 
        • reusability 
        • polymorphic classes
        • Polymorphism and more...

     ___________________________________________
    | Object Oriented Programming Limitations ! |
    |___________________________________________|

    • Not a panacea
        • OO Programming won't make bad code better 
        • not suitable for all types of problems 
        • not everything decomposes to a class
    
    • Learning curve
        • usually a steeper leaning curve, especially for C++ 
        • many oo languages, many variations of oO concepts
    
    • Design
        • usually more up-front design is necessary to create good models and hierarchies
    
    • Programs can be:
        • larger in size 
        • slower 
        • more complex

     _____________________
    | Classes and Objects |
    |_____________________|

    • Classes 
        • blueprint from which objects are created 
        • a user-defined data-type
        • has attributes (data) 
        • has methods (functions) 
        • can hide data and methods 
        • provides a public interface
    
    • Example classes 
        • Account 
        • Employee 
        • Image 
        • std::vector 
        • std::string

    • Objects 
        • created from a class 
        • represents a specific instance of a class 
        • can create many, many objects 
        • each has its own identity 
        • each can use the defined class methods

    • Example Account objects
        • Frank's account is an instance of an Account 
        • Jim's account is an instance of an Account 
        • Each has its own balance, can make deposits, withdrawals, etc.

        int high_score;
        int low score;

        Account frank account;
        Account jim account;
        
        std::vector<int> scores; 
        std::string name;

*/

/*
          Constructor	                                            Function
- Constructor is a block of code that          | - Function is a group of statements that can be called at any point in the program using its name to perform a specific task.
  initializes a newly created object.	       |
- Constructor has the same name as class name. | - Function should have a different name than class name.
- Constructor has no return type not even void.| - Function requires a valid return type.
*/