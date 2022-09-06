/*
    **********************************************
    * Initialize a Class Object in another Class *
    **********************************************

    In C++ some cases for example implementing a linked list we used a interesting
    approach of initializing an object of one class in another class. 

    Reference: https://stackoverflow.com/questions/62983814/c-initialising-an-object-of-a-parameterized-class-inside-another-class
*/

#include <bits/stdc++.h>
using namespace std;

//__________________First Example___________________________
class A{
public:
    A(int s)
    {cout<<s;}
};

class B{
private:
    A a;
public:
    B(int path) : a(path) {
    }
};

//__________________Second Example___________________________
class C{
public:
    C(string s)
    {cout<<s;}
};

class D{
private:
    // A a;
public:
    D(string path){         // or B(int path) : a(path){} where we are using member initializer function uncomment
        string path2 = path;    
        C a(path2);
    }
};

//__________________Thrid Example___________________________
class Building{
    public:
        int b;

        Building(int val){
            b = val;
        }
};

class Student{
    public:

        Building *head;
        Student(){
            head = new Building(10);
        }

        void print(){
           cout<< head->b;
        }
        
};

int main(){
    //first example
    B object_1(100);
    //second learning
    D object_2("HIIIII");
    
    //thrid learning
    Student aman;
    cout<< aman.head->b;    //will return 10
    aman.print();           // will return same as above


}
