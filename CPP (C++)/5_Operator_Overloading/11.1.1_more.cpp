//https://www.youtube.com/watch?v=ieD3l--qgK4 && https://www.youtube.com/watch?v=I6C2u8WjHto

#include<iostream>
using namespace std;

class Base{
    int x; 
    public:
    Base(int x=0):x{x} {} 
    friend class Test;
};


class Test{
int *x; 

public:

    Test(int val=0)
        :x{new int(val)} {

    } 
    void setX(int val) {
        *x = val; 
        } 

    void print() {
        cout << "OUTPUT: " << *x << endl; 
        } 

    ~Test() { delete x; } 

    Test& operator = (const Test& rhs) { 
        if(this != &rhs)
            *x = *rhs.x; 
        return *this;
    }

    Test& operator = (const Base& rhs) {
        *x = rhs.x; 
        return *this;
    }

};


int main() {
    Test t1(10); 
    t1.print(); 
    Base b(20); 
    t1 = b; 
    t1.print(); 
    return 0;
}