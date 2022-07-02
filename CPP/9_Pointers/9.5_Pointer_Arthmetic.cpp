/*
    *********************
    * Pointer Arthmatic *
    *********************

    -Pointers can be used in
        -Assignment expressions
        -Arthmetic expressions
        -Comparison expressions
    -C++ allows pointer arthmetic
    -Pointer arthmetic only makes sense with raw arrays

    ___________
   |           |
   | ++ and -- |
   |___________|

    - (++) increments a pointer to point to the next array element
        int_ptr++;
    - (--) decrements a pointer to point to the previous array element
        intptr--;

    ___________
   |           |
   | +  and  - |
   |___________|

   - (+) increment pointer by n* sizeof(type)
        int_ptr += n; or int_ptr = int_ptr + n;
   - (-) decrement pointer by n * sizeof(type)
        int_ptr -= n; or int_ptr = int_ptr - n;

    
    ____________________________
   | Substracting two pointers  |
   |____________________________|

   - Determine the number of elements between the pointers

   - Both pointers must point to the same data type

        int n = int_ptr2 - int_ptr1;


    ___________________________________
   | Comparing two pointers == and !=  |
   |___________________________________|

   Determine if two pointers point to the same location
    - dose NOT compare the data where they point!

    string s1 {"Frank"};
    string s2 {"Frank"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << (p1 == p2) <<endl;  //false
    cout << (p1 == p3) <<endl;  //true

    ______________________________________
   | Comparing the data pointers point to |
   |______________________________________|

   Determine if two pointers point to the same data
    - you must compare the referenced pointers

    string s1 {"Frank"};
    string s2 {"Frank"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << (*p1 == *p2) <<endl;  //true
    cout << (*p1 == *p3) <<endl;  //true

*/

// Pointer Arithmetic

#include <iostream>

using namespace std;

int main() {
    
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr {scores};
    
    while (*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    cout << "\n-------------------------" << endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        cout << *score_ptr++ << endl;
        
    cout << "\n-------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};		
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;		// false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;		// true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;		// true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// true
    
    p3 = &s3;   // point to James
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// false
    

    cout << "\n-------------------------" << endl;
    char name[]  {"Frank"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2{nullptr};
    
    char_ptr1 = &name[0];   // F
    char_ptr2 = &name[3];   // n

    cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1  << endl; 
    
    cout << endl;
    return 0;
}

