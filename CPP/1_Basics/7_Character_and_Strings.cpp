/* 

    Section Overview:

    -Character Functions
    -C-Style Strings
    -Working with C-Style Strings
    -C++ Strings
    -Working with C++ Strings

    C++ works with both C++ and C Style Strings use C++ strings for mordern strings

    //______________________________________
    //        Character Functions
    //______________________________________

    #include<cctype>

    function_name (char)

    -Funtions for Testing Characters ( Returns True or False)
    -Functions for converting character case

    Testing Characters:

        isalpha(c) -> True if c is a letter
        isalnum(c) -> True if c is a letter or digit
        isdigit(c) -> True if c is a digit
        islower(c) -> True if c is a lowercase letter
        isupper(c) -> True if c is a uppercase letter
        isprint(c) -> True if c is a printable character
        ispunct(c) -> True if c is a punctuation character
        isspace(c) -> True if c is a whitespace

    Converting Characters:

        tolower(c) -> Returns lowercase of c
        toupper(c) -> Returns uppercase of c

    //______________________________________
    //        C-Style Strings
    //______________________________________

    Sequence of characters:
        
        -contiguous in memory
        -implemented as an array of characters
        -terminated by a null character(null)
            -numm - character with a value of zero
        -referred to as zero or null terminated strings

    String Literal:

        -sequence of characters in double quotes e.g. "Frank"
        -constant
        -terminated with a null character

    //______________________________________
    //             C++ Strings
    //______________________________________

    -std::string is a class in the STL(Standard Template Library)
    -#include<string>
    -std namespace
    -contiguous in memory
    -dynamic size
    -work with input and output streams
    -lots of useful member functions
    -out familiar operators can be used (+,=,<,>,<=,>=,+=,==,!=,[]...)
    -can be easily converted to C-style strings if needed
    -safer

    eg.:

    #include<string>
    using namespace std;

    string s1;

*/

#include<iostream>

#include<cstring>   // for c-style string functions
#include<cctype>    // for character based functions

#include <ostream>
#include<string>    //C++ library

using namespace std;
int main(){


    //C-Style string (watch videos 04 folder 10)

    char first_name[20]{};  //array
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    cout<<"Please enter your first name: "<<endl;
    cin>>first_name;

    cout<<"Please enter your last name: ";
    cin>>last_name;
    cout<<"------------------------------"<<endl;

    cout<<"Hello, "<<first_name<<" you first name has "<<strlen(first_name)<<" characeters"<<endl;  //strlen will show the size of the first_name whcich will be Frank\0 (\0 is a null character) which is 5
    cout<<"and your last name, "<<last_name<<" has "<<strlen(last_name)<<" characters."<<endl;


    //C++ String

    string s1;              // Empty
    string s2 {"Frank"};    // Frank
    string s3 {s2};         // Frank
    string s4 {"Frank", 3}; // Fra
    string s5 {s3, 0, 2};   // Fr
    string s6 {3, 'X'};     // XXX

    //We can also assign as 

    string s7;
    s7 = "C++ Rocks!";

    string s8 {"Hello"};
    s8 = s1;

    //Concatenation

    string part1{"C++"};
    string part2{"is a powerful"};

    string sentence;

    sentence = part1 + " " + part2 + " language";   //C++ is a powerfull language

//    sentence = "C++" + " is powerful";  //illegal dont use C style in C++
   cout<<sentence<<endl;

    //Accessing characters [] and at() method

    cout<<s2[0]<<endl;      //F (array style)
    cout<<s2.at(0)<<endl;   //F (vector style)

    s2[0] = 'f';        // frank (array style)
    s2.at(0) = 'p';     // prank (vector style)

    for(char c: s1){
        cout<<c<<endl;
    }
/*
    Output: (if in for loop its char)

    F
    r
    a
    n
    k

    If the for loop variable is changed to int the output will show the interger value of the characters likethis

    Output:

    70      //F
    114     //r
    97      //a
    110     //n
    107     //k
    0       //null character
*/

    //Comparing:
/*  ==  !=  >   <   >=  <=

    The objeccts are compared character by character laxically 

    -In ACII characters the capital letters comes first than small letters

*/

    string s9{"Apple"};
    string s10{"Banana"};
    string s11{"Kiwi"};
    string s12{"apple"};
    string s13{s9}; //Apple     

    s9 == s13;    //True
    s9 == s10;    //False
    s9 != s10;    //True
    s9  < s10;    //True
    s10 > s9;     //True
    s12 < s13;    //False
    s9 == "Apple";//True

    //Substrings - substr()
/*  Extracts a substring from a std::string

        object.substr(start_index, length)

*/

    string s14 {"This is a test"};

    cout << s14.substr(0,4);    //This
    cout << s14.substr(5,2);    //is
    cout << s14.substr(10,4);   //test
    cout<<endl<<endl;
    //Searching - find()

/*  Returns the index of a substring in a std::string

        object.find(search_string)
*/

    string s15{"This is a test"};

    cout << s15.find("This")<<endl;   //0
    cout << s15.find("is")<<endl;     //2   this is 2 coz there is an "is" in "This" so "is" at 2 location counting form 0 as in memory, counting starts from 0 like 0,1,2,3 not the other way around like 1,2,3
    cout << s15.find("test")<<endl;   //10
    cout << s15.find('e')<<endl;      //11
    cout << s15.find("is",4)<<endl;   //5   in this the search starts after index 4 so the next "is" on 5
    cout << s15.find("XX")<<endl;     //string::npos

    //Removing characters
/*  erase() and clear()

    Removes a substring of characters from a std::string
        object.erase(start_index,length)
*/

    //we will use the same string as string 15 for this part as well

    cout << s15.erase(0,5)<<endl;   // is a test
    cout << s15.erase(5,4)<<endl;   // is a
    s1.clear();                     //empties string s1

    //Length
    
    string s16{"my name"};
    cout<<"Length of the string is: "<<s16.length()<<endl;  //5

    s16 += " is vineet maan!";
    cout << s16 <<endl;     // my name is vineet maan!

    //Input >> and getline()

/*  Reading std::string from cin
*/

    string s17{};
    cin >> s17;     // Hello there
                    //Only accepts up to the first space
    cout << s1 << endl; //Hello

    getline(cin,s17);   //Read entire line until \n ( enter key)
    cout << s17 <<endl;   //Hello there

    getline(cin,s17,'x');   //this isx
    cout << s17 <<endl;       //this is
    
}