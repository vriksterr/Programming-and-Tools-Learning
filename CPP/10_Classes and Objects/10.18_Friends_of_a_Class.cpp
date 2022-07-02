/*

    **********************
    * Friends of a Class *
    **********************
    Friend Class A friend class can access private and protected members of other class in which 
    it is declared as friend. It is sometimes useful to allow a particular class to access private 
    members of other class. For example, a LinkedList class may be allowed to access private members of Node. 

    A friend class can access both private and protected members of the class in which it has been 
    declared as friend.

    • Friend
        • A function or class that has access to private class member 
        • And, that function of or class is NOT a member of the class it is accessing
    
    • Function
        • Can be regular non-member functions 
        • Can be member methods of another class
    
    • Class
        • Another class can have access to private class members

    
    • Friendship must be granted NOT taken
        • Declared explicitly in the class that is granting friendship 
        • Declared in the function prototype with the keyword friend
    
    • Friendship is not symmetric 
        • Must be explicitly granted
            • if A is a friend of B 
            • B is NOT a friend of A

    • Friendship is not transitive 
        • Must be explicitly granted
            • if A is a friend of B AND 
            • B is a friend of C 
            • then A is NOT a friend of C
*/

// Example:

#include<iostream>
using namespace std;

class A
{
	int x;
		public:
			
	A()
	{
		x=10;
	}
	friend class B; //friend class
};

class B
{
	public:
		void display(A &t)
		{
			cout<<endl<<"The value of x="<<t.x;
		}
};

// Example: Find the largest of two numbers using Friend Function
class Largest
{
    int a,b,m;
    public:
        void set_data();
        friend void find_max(Largest);       
};
 
void Largest::set_data()
{
    cout<<"Enter the First No:";
    cin>>a;
    cout<<"Enter the Second No:";
    cin>>b;
}
 
 
 
void find_max(Largest t)
{
    if(t.a>t.b){
        t.m=t.a;
    }
    else{
        t.m=t.b;
    }   
        cout<<"Maximum Number is\t"<<t.m;
}

int main()
{
	A _a;
	B _b;
	_b.display(_a);
	
    // Example: Find the largest of two numbers using Friend Function
     Largest l;
    l.set_data();
    find_max(l);
    
    return 0;
}
