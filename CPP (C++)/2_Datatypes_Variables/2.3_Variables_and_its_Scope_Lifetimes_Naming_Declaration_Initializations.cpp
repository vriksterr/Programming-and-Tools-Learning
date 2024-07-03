/*  

    ************
    * Literals *
    ************
    Literals are literally means these values are stored directly in our program binary code for eg.
    int a = 10; //here a is a variable and 10 is a literal

    *************
    * Variables *
    *************
    In C++, variables are used to store data that can be manipulated and referenced throughout a program.
    There are 3 terms in Variable:
        1.Variable Declaration: This term refers to the process of defining a variable's type and its name without necessarily assigning it a value. A declaration 
                                tells the compiler about the variable's existence and its type.
                                ```
                                int number; // Declaration of an integer variable named 'number'
                                ```
        
        2.Variable Assignment: This is the process of giving a variable a new value. It happens after the variable has already been declared. The assignment operator (=) is 
                               used to set or change the value of the variable.
                               ```
                               int number;  // Declaration of the variable 'number'
                               number = 5;  // Assignment of the value 5 to the variable 'number'
                               ```

        3.Variable Initialization(initial/starting value): Initialization is the process of assigning an initial value to a variable at the time of its declaration. This can 
                                                           be done using various methods such as direct assignment, using a constructor, or through list initialization (for complex data types).
                                                           ```
                                                           int number = 5; // Declaration and initialization of 'number' with the value 5
                                                           ```

                                                           There are 3 ways you can initialize values in C++:
                                                                •Direct Initialization - Using () : Direct initialization uses parentheses to initialize a variable. This method is often preferred because it can 
                                                                                                    avoid certain ambiguities and unexpected behavior associated with other forms of initialization.
                                                                                                    ```
                                                                                                    int a(10);         // Directly initializes an integer variable 'a
                                                                                                    ```

                                                                                                    Also () can only be used in initialization time not assignment time
                                                                                                    ```
                                                                                                    int number(5);   //This is valid.
                                                                                                    number(5);       //This is invalid, assignment can only be dose using = operator.
                                                                                                    ```
                                                                
                                                                •Copy/Assignment Initialization - Using = : Copy initialization uses the assignment operator to initialize a variable. This method can sometimes invoke the copy constructor for user-defined 
                                                                                                            types, and it can be less efficient than direct initialization due to potential extra copies.
                                                                                                            ```
                                                                                                            int a = 10;           // Copy initializes an integer variable 'a' with the value 10
                                                                                                            double d = 5.5;       // Copy initializes a double variable 'd' with the value 5.5
                                                                                                            std::string s = "Hello"; // Copy initializes a string object 's' with the value "Hello"
                                                                                                            ```
                                                                •List/Braced Initialzation - Using {} : List initialization uses braces {} to initialize variables and is part of the Uniform Initialization syntax introduced in C++11. It provides a 
                                                                                                        consistent way to initialize containers, aggregates, and user-defined types. List initialization helps prevent narrowing conversions, which 
                                                                                                        can lead to data loss or unexpected behavior.
                                                                                                        ```
                                                                                                        int a{10};               // List initializes an integer variable 'a' with the value 10
                                                                                                        double d{5.5};           // List initializes a double variable 'd' with the value 5.5
                                                                                                        std::string s{"Hello"};  // List initializes a string object 's' with the value "Hello"

                                                                                                        // List initialization with multiple values (for aggregates or containers)
                                                                                                        std::vector<int> v{1, 2, 3, 4, 5};  // List initializes a vector with values 1, 2, 3, 4, 5

                                                                                                        // Preventing narrowing conversion
                                                                                                        int x{3.14};             // Error: narrowing conversion from double to int
                                                                                                        ```
                                                                                                        ```
                                                                                                        #include <iostream>

                                                                                                        int main(){
                                                                                                        int myint(3.14);                              //compiler will allow and narrowing error wont be shownthis this method is called Function variable initialization
                                                                                                        std::cout << "myint: " << myint << std::endl;

                                                                                                        int myint1{3.14};                             //will throw error for narrowing so this wont compile
                                                                                                        std::cout << "myint: " << myint1 << std::endl;

                                                                                                        }
                                                                                                        ```
                                                                                                        In the code above, the compiler compiles line 4 even though it is converting a decimal number to an 
                                                                                                        integer. This results in a loss of accuracy. However, when the same initialization is done using
                                                                                                        braces in line 7, the compiler generates an error that alerts the user to the occurrence​ of narrowing.
                                                                                                        
                                                                                                        Also {} can only be used in initialization time not assignment time
                                                                                                        ```
                                                                                                        int number{5};   //This is valid. It also provides narrowing check support.
                                                                                                        number{5};       //This is invalid, assignment can only be dose using = operator.
                                                                                                        ```
     ____________________________
    |   Variables names in C++  |
    |___________________________|

    - Variables names can contain $, letters, digits, _(underscore)
    - Names are case sensitive (myVar and myvar are different variables)
    - Names cannot contain whitespaces or special characters like !, #, %.
    - Reserved words (like C++ keywords, such as int) cannot be used as names

    acceptable variable names:
        Grade or grade  //both of these are going to 2 different variables coz one has G and another has g so even tho they are the same word for C++ they are 2 different variable coz of this change
        GradeOnTest
        Grade_On_Test
        _my_var
        myvar2
        my2var
        myVar
        $
        $myvar
        $xxx$

    unacceptable variable names:
        Grade(Test)
        GradeTest#1
        3rd_Test_Grade
        2myvar
        my-var
        my+var
        my var
        ,myvar
        !myvar
        my*var
        my,var
        and all the reserved c++ names

    References: https://www.geeksforgeeks.org/naming-convention-in-c/

     ______________________________
    |   Variable Scope & Lifetime |
    |_____________________________|

    • Variable Scope: Variable scope tells us about the range within which the variable can be accessed/modified. Scope also affects the lifetime of variables (read below).
    • Variable Lifetime: The period of time during which a variable is alive in memory. It becomes alive when you declare it and is destroyed (wiped out) from memory at some point based of various factors.

    Ways Scope & Lifetime are defined:
        1. Local Variables: Declared within a function or block{} and accessible only within that function or block{}. Their lifetime is limited to the execution of the block.
                            ```
                            void function() {
                                int localVar = 5;
                                // localVar is accessible here
                            } // localVar is destroyed here
                            ```

        2. Global Variables: Declared outside of any function and scope is accessible from any function within the same program. Their lifetime extends for the duration of the program. There memory 
                             allocation happens in static/global location according to C++ memory allocation. Also only declaration and definition are allowed in the global scope arbitrary expression
                             or statement like i; are not valid outside of functions.
                             ```
                             int globalVar = 10;
                             void function() {
                                // globalVar is accessible here
                             }
                             ```
                             ```
                             int i = 100;
                             i;     //not valid
                             int main(){
                                i;  //valid
                             }
                             ```

        3. By Linkage:
            i. Internal Linkage: Variables are visible only within the translation unit they are defined in, typically achieved using the static keyword.
                a. Static Variables: Retain their value between function calls and are only visible within the function or file they are declared in. There memory allocation happens
                                     in static/global location according to C++ memory allocation. But there scope is limited to where they are present inside program.
                                     ```
                                     static int fileStaticVar = 5; // fileStaticVar has internal linkage
                                     void function() {
                                         static int staticVar = 5;
                                         staticVar++;
                                         // staticVar retains its value between calls
                                     }
                                     ```

            ii. External Linkage: Variables can be accessed from other translation units.
                a. Extern Variable: The extern keyword in C++ is used to declare a variable or a function that is defined in another file or elsewhere in the same file. It tells the 
                                    compiler that the actual storage and definition of the variable or function exist elsewhere. This is particularly useful for sharing variables 
                                    and functions across multiple files in a project. The extern keyword is used to reference global or static variables that are declared outside of 
                                    any function, typically at the global scope.
                                    ```
                                    // Declaration in a header file
                                    extern int externalVar;

                                    // Definition in a source file
                                    int externalVar = 10;
                                    ```

        4. Namespace Scope Variables: Declared within a namespace, accessible only through the namespace or via a using directive.
                                      ```
                                      namespace MyNamespace {
                                          int namespaceVar = 20;
                                      }
                                      void function() {
                                          MyNamespace::namespaceVar = 25; // Accessed via namespace
                                          using namespace MyNamespace;
                                          namespaceVar = 30; // Accessed directly after using directive
                                      }
                                      ```

        5. Class Scope Variables: Variables declared inside a class have class scope (also known as member variables). These variables are accessible to all member functions of the class.
                                  ```
                                  class MyClass {
                                  private:
                                      int classVar; // classVar is accessible within the class
                                  public:
                                      void myMethod() {
                                          classVar = 30; // classVar can be used here
                                      }
                                  };
                                  ```

        6. Function Scope: This term typically applies to labels used in goto statements. Labels have function scope and are only accessible within the function where they are defined.
                           ```
                           void myFunction() {
                               goto label;
                               // other code
                               label:
                               // more code
                           }
                           ```

        7. Dynamic Variables: Allocated and deallocated explicitly using new and delete. Their lifetime is managed manually by the programmer.
                              ```
                              void function() {
                                int* dynamicVar = new int(10);
                                // dynamicVar is accessible here
                                delete dynamicVar; // dynamicVar is destroyed here
                              }
                              ```

        8. Thread-local Storage: Variables are unique to each thread. Declared with thread_local, they have thread storage duration.
                                 ```
                                 thread_local int threadVar = 0; // threadVar is unique to each thread
                                 void function() {
                                     threadVar++;
                                     // threadVar retains its value within the same thread
                                 }
                                 ```

Source: https://www.educative.io/answers/declaring-a-variable-with-braces-in-cpp
        https://www.geeksforgeeks.org/uniform-initialization-in-c/
    
*/

#include <iostream>
#include <thread>

// Global variable
int globalVar = 10;

// Extern variable declaration (typically this would be in a header file)
extern int externalVar;

// Function demonstrating local, static, and dynamic variables
void function() {
    // Local variable
    int localVar = 5;
    
    // Static variable
    static int staticVar = 1;
    staticVar++;

    // Dynamic variable
    int* dynamicVar = new int(15);
    
    std::cout << "Local variable: " << localVar << std::endl;
    std::cout << "Static variable: " << staticVar << std::endl;
    std::cout << "Dynamic variable: " << *dynamicVar << std::endl;

    delete dynamicVar; // Clean up dynamic memory
}

// Internal linkage variable
static int internalVar = 40;

namespace MyNamespace {
    // Namespace scope variable
    int namespaceVar = 20;
}

class MyClass {
private:
    // Class scope variable
    int classVar;
public:
    MyClass() : classVar(30) {}
    void showClassVar() {
        std::cout << "Class variable: " << classVar << std::endl;
    }
};

// Thread-local variable
thread_local int threadVar = 0;

void threadFunction() {
    threadVar++;
    std::cout << "Thread-local variable: " << threadVar << std::endl;
}

int main() {
    // Global variable
    std::cout << "Global variable: " << globalVar << std::endl;

    // Function call to demonstrate local, static, and dynamic variables
    function();
    function(); // Call again to see the static variable retain its value

    // Internal linkage variable
    std::cout << "Internal linkage variable: " << internalVar << std::endl;

    // Namespace scope variable
    std::cout << "Namespace variable: " << MyNamespace::namespaceVar << std::endl;

    // Class scope variable
    MyClass obj;
    obj.showClassVar();

    // Function scope (label)
    goto label;
    std::cout << "This line will be skipped." << std::endl;
    label:
    std::cout << "Jumped to label." << std::endl;

    // Thread-local storage
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);
    t1.join();
    t2.join();

    // External variable
    std::cout << "External variable: " << externalVar << std::endl;

        {
            int value1 = 10;    //local variable dies at the end of the scope
            int value2 = 20;
        }

    return 0;
}

// Extern variable definition (typically this would be in another source file)
int externalVar = 50;
