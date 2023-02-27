/*
    *********************************
    * Static and Constant Functions *
    *********************************

     _________________
    | Static Function |
    |_________________|
    Static Function: It is a member function that is used to access only static data members. It cannot access non-static data members not even call non-static member functions.
    It can be called even if no objects of the class exist. It is also used to maintain a single copy of the class member function across different objects of the class.

            // C++ program to illustrate the use
            // of static function
            #include "bits/stdc++.h"
            using namespace std;

            class A {
            public:
                static void f()
                {
                    cout << "GeeksforGeeks!";
                }
            };

            // Driver Code
            int main()
            {
                A::f();
            }


     ___________________
    | Constant Function |
    |___________________|
    It is a function that is generally declared as constant in the program. It also guarantees that it will not allow modifying objects or call any non-const member functions. 
    It specifies that function is a read-only function and does not modify the object for which it is called.

        For examples look at the sources below


    Source: https://www.youtube.com/watch?v=4fJBrditnJU
            https://www.youtube.com/watch?v=RC7uE_wl1Uc
            https://www.geeksforgeeks.org/difference-between-static-and-constant-function-in-cpp/
            https://www.geeksforgeeks.org/const-member-functions-c/
            https://stackoverflow.com/questions/28404538/what-is-the-difference-between-int-const-functionparameters-int-functioncons
            https://www.educative.io/answers/what-are-const-functions-in-cpp
*/
