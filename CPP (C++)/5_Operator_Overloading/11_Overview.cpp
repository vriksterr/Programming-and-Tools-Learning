/*

    ************************
    * Operator Overloading *
    ************************

    In c++ we can create special type of functions called operater functions and we use those operator 
    functions in order to define how a certain operator will behave with a specific datatype
    
    for example 4 + 5 here the compiler already knows how the + behaves when both are numbers and will
    just add the both

    but what is going to happen when we have a user defined datatype lets say a structure called car and try to
    do something like car1 + car2 in such situations we can creat our own overloaded function which is called
    operator + and inside that function we can define how it will behave when we try to sum two cars and that 
    is called operator overloading!

    On a side note operator funtions are same as regular functions but they are predefined by 
    the C++ standing community

    Also if you do not provide your own overloaded assignment operator then C++ will provide a compiler generated
    one for you it is simimal to the defauly copy constructor
     _______________________________
    | What is Operator Overloading? |
    |_______________________________|

    • Overloading the assignment operator (=)
        • Copy semantics
        • Move semantics 
        
    • Overloading operators as member functions 
    • Overloading operators as global functions
    • Overloading stream insertion (<<) and extraction operators (>>)

    • Using traditional operators such as +, =, *, etc. with user-defined types 
    • Allows user defined types to behave similar to built-in types 
    • Can make code more readable and writable
    • Not done automatically (except for the assignment operator)
      They must be explicitly defined

     __________________________________
    | What Operator can be overloaded? |
    |__________________________________|

    • The majority of C++ operatores can be overloaded
    • The following operators cannot be overloaded
        ::      Scope resolution operator
        :?      Conditional operator
        .*      Pointer to Member operator
        .       Dot operator
        sizeof  sizeof operator

     __________________
    | Some basic rules |
    |__________________|

    • Precedence and Associativity cannot be changed
    • 'arity' cannot be changed (i.e. can't make the division operator unary)
    • Can't overload operators for primitive type (e.g. int, double, etc.)
    • Can't create new operators
    • [], (), ->, and the assignment operator (=) must be declared as member methods
    • Other operators can be declared as member methods or global functions


*/
// Reference: https://www.youtube.com/watch?v=BnMnozsSPmw
//Operator Overloading
#include<iostream>
#include<string>
#include<list>
using namespace std;

struct YouTubeChannel {     //First Struct
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==(const YouTubeChannel &channel) const{
        return this->Name == channel.Name;
    }
};
ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel) {
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

struct MyCollection {       //Second Struct
    list<YouTubeChannel>myChannels;

    void operator+=(YouTubeChannel &channel) {
        this->myChannels.push_back(channel);
    }
    void operator-=(YouTubeChannel &channel) {
        this->myChannels.remove(channel);
    }
};
ostream &operator<<(ostream &COUT, MyCollection &myCollection) {
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}

int main()
{
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;

    cout << myCollection;
    
    cin.get();
}