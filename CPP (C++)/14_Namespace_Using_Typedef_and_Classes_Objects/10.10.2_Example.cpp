/*

Object Delegation in C++: Object Delegation means using the object of another class as a class member of another class. It is known as object delegation. Below are some properties of the delegation:

• Delegation can be an alternative to inheritance, but in an inheritance, there is an i-s a relationship, but in the delegation, there is no inheritance relationship between the classes. 
• The Delegation allows us to use the properties of the particular class that is required in the class.
• Delegation can be viewed as a relationship between objects where one object forwards a certain method calls to another object, called its delegate. 
• The primary advantage of delegation is run-time flexibility - the delegate can easily be changed during run-time. 
• But unlike inheritance, delegation is not directly supported by most popular object-oriented languages, and it doesn't facilitate dynamic polymorphism.
  
  Below is the C++ program illustrating Object Delegation:
*/
// C++ program to illustrate the
// Object Delegation
#include <iostream>
using namespace std;
class First {
public:
	void print() { cout << "The Delegate"; }
};
class Second {
	// Creating instance of the class
	First ob;

public:
	void print() { ob.print(); }
};

// Driver Code
int main()
{
	Second ob1;
	ob1.print();
	return 0;
}

/*

Output: 
The Delegate

*/

/*
When to use what?

Here are some examples of when inheritance or delegation are being used:
    •Assume class is called B and the derived/delegated to class is called A.
    •If users want to express a relationship (is-a), then use inheritance.
    •Users want to be able to pass the class to an existing API expecting A’s, then use inheritance.
    •Users want to enhance A, but A is final and can no further be sub-classed than use composition and delegation.
*/