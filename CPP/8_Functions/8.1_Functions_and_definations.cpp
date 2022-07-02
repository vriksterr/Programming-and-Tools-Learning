/*
    Defining functions
        -name
            -the name of the function
            -same rules as of variables
            -should be meaningful
            -usually a verb or a verb phrase
    
        -parameter list
            -the variables passed into the function
            -there types must be specified
        
        -return type
            -the type of the data that is returned from the function
        
        -body
            -the statements that are executed when the function is called
            -in curly braces{}

    Example:

        With no prameters

        int funtion_name ()     //Here 1) NAME -> funtion_name
        {                              2) Prameters -> ()  variables inside this parameters are local to that function and also a parameter is like a 4 wall boundary surrounding the {code} like a real life parameter within which the {code executes} while depending on the parameter provided help in (), parameter can be empty as well meaning {code} dosent rely on the parameter for help. Definition of parameter: 1)a limit or boundary which defines the scope of a particular process or activity. 2) a numerical or other measurable factor forming one of a set that defines a system or sets the conditions of its operation.
            statements(s);             3) Return type -> int
            return 0;                  4) Body -> statements inside {}
        }


        With 1 prameter

        int funtion_name (int a)     //Here 1) NAME -> funtion_name
        {                                   2) Prameters -> (int a)
            statements(s);                  3) Return type -> int
            return 0;                       4) Body -> statements inside {}
        }

        
        With no return type (void)

        void funtion_name ()     //Here 1) NAME -> funtion_name
        {                               2) Prameters -> (int a)
            statements(s);              3) No Return type
            return; //optional          4) Body -> statements inside {}
        }


        With multiple prameters

        void funtion_name (int a, std::string b)     //Here 1) NAME -> funtion_name
        {                                                   2) Prameters -> (int a)  
            statements(s);                                  3) Return type -> int
            return;    //optional                           4) Body -> statements inside {}
        }


    Also the variable value you pass to a function is an Argument... But the variable in the () definition of that function is a parameter

        For example
        void exampleMethod(parameter, parameter2, parameter3){
                 // do something here with them
        }

        exampleMethod(argument, argument2, argument3);
*/

#include <iostream>
using namespace std;

//Calling a function
void testing_for_void_loop(){
    cout<<"Is the loop printed 10 times? count it !"<<endl;
}
void say_world(){           // void is to be used where you are not using return statement in those case based on the type of the return void will change to string,double,float,int etc 
    cout<<" World"<<endl;
    cout<<" Bye from say_world"<<endl;
}
void say_hello (){
    cout<<" Hello"<<endl;
    say_world();
    cout<<" Bye from say_hello"<<endl;
}

int main(){     // Execution always begin with the main function
    for (int i{1}; i<=10; ++i) {    //should print 10 hello
       testing_for_void_loop();
    }
    say_hello();                    //will print 1 extra hello making it a total of 11 hello
    return 0;
}