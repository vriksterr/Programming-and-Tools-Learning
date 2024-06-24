/*  

    ************
    * Literals *
    ************
    Literals are literally means these values are stored directly in our program binary code for eg.
    int a = 10; //here a is a variable and 10 is a literal

    *************
    * Variables *
    *************
    variables you can undetstand from above example
    There are 3 terms in Variable:
        1.Variable Declaration: When you write int y;, you are only declaring the variable y without initializing it. This declaration 
                                is lighter in terms of what the compiler needs to do. It simply allocates space for the variable without assigning an initial value.
        2.Variable Definition: In definition, users defines the previously declared variable. x = 10;
        3.Variable Initialization: When you write int y = 5;, you are both declaring and initializing the variable y in one statement. Initialization involves assigning a 
                                   value to the variable at the point of its declaration. This is considered a "full" declaration. When you initialize a variable, it involves 
                                   more than just reserving space; it includes assigning a value, which might require a clear and confined scope to avoid conflicts and ensure proper execution.

    Also all different types of variables data types such as int, float, bool(boolean), char, double, etc
     
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
                             allocation happens in static/global location according to C++ memory allocation.
                             ```
                             int globalVar = 10;
                             void function() {
                                // globalVar is accessible here
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
