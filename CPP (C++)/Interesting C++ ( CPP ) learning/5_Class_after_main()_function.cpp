// Way to use Class after Main function in C++
//Reference: https://stackoverflow.com/questions/18045988/c-what-to-code-if-i-put-a-class-after-main-function
//Reference2: https://www.youtube.com/watch?v=w35ObkSRq48
// Also read this : https://www.tutorialspoint.com/cplusplus/cpp_class_member_functions.htm

#include<iostream>
using namespace std;

//Prototypes
class ClassOne;
ClassOne *make_class_one();     //like int func() this is also a function whose return type is an object
ClassOne function_of_no_use();
void use_object();
void use_class(ClassOne* x);


//Main Function
int main()
{
    ClassOne *one = make_class_one();
    use_class(one);
    //

    cout<<make_class_one(); //outputs an address of the function as it is a pointer
    
    /*The reason it wont work is coz the compiler looks up and cant find the class
    defination so thats why we use the trick above*/
 //   ClassOne two = function_of_no_use();

    //
    use_object();
    //
    return 0;
}


//Definations
class ClassOne
{
public:
    void coolSaying()
    {
        cout << "Cool stuff yo!" << endl;
    }
};

ClassOne *make_class_one()
{
    return new ClassOne;   // Bad idea, use uniqe_ptr, but I'm lazy.
}

ClassOne function_of_no_use() {
    ClassOne func;
    return func;
}


void use_class(ClassOne* x)
{
    x->coolSaying();
}


//extra
void use_object() {
    ClassOne func;
    cout << endl;
    func.coolSaying();
}