#include <cstring>
#include <iostream>
#include <ostream>
#include "11.1_Mystring.hpp"

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';        //this is empty string
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';        
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {    //the overloaded assignment operator method returns a reference to a mystring object.This is important since we want to avoid extra copies if we return by value.And we also want to allow chain assignments, such as p1 equals p2 equals p3. The compiler will actually convert the s2 equals s1 assignment statement to s2.operator equal and pass in s1 behind the scenes.
                                                        //here the &Mystring is saying that the operator= reference is in mystring class construcor
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];   //allocate storage for the deep copy in heap we are doing + 1 coz size of hellow is 6 and +1 for string terminator
    std::strcpy(this->str, rhs.str);            //here we are using a c style string, we can simply call the string liberary method strcpy which copies the right hand side object to the left hand side object
    return *this;                               //here we return *this which is left hand side object coz we want to allow chain assignment s1=s2=s3
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }




