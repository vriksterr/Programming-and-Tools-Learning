/*
    ***************************************
    * Structural Padding & Packing in C++ *
    ***************************************

    It is basically a way for compiler to give free space in memory so the next variable 
    that is stored in the next chunk and can be accessed entirely in 1 cpu cycle rather
    than accessing 1 variable who is distributed where cpu will have to spend 2 cpu cycles
    to access the variables/etc.

    References : 1) https://stackoverflow.com/questions/47968348/size-of-class-with-virtual-function-adds-extra-4-bytes
                 2) https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
                 3) https://www.youtube.com/watch?v=aROgtACPjjg
                 4) https://www.youtube.com/watch?v=QSuBwGmFQqA
                 5) https://www.youtube.com/watch?v=tUAGceoY0R4
                 6) https://www.ebhor.com/object-size-in-c/#:~:text=In%20a%20C%2B%2B%20programming%20language,their%20sum%20is%209%20bytes%20.
*/

#include <iostream>
#include<cstdio>

using namespace std;

class ListNode1 {

};

class ListNode2 {
public:
    int val_;

};

class ListNodepointer {
public:
    ListNodepointer* next;

};

class ListNode3 {
public:
    int val_;
    ListNode3* next;
};

class ListNode4 {
public:
    int val_;   // size 4
    ListNode4* next1; // 4 + 4 + 4 = 12
    // address int + int val + next pointer all the 4 each
    ListNode4* next2;
    ListNode4 *next3;
};

int main() {

    cout << "============ A1 =============" << endl;

    ListNode1 A1;
    cout << "Size of A1 : " << sizeof(A1) << endl;

    cout << "============ A2 =============" << endl;
    ListNode2 A2;

    cout << "Size of A.val : " << sizeof(A2.val_) << endl;
    cout << "Size of A : " << sizeof(A2) << endl;

    cout << "============ A pointer =============" << endl;
    ListNodepointer Apointer;

    cout << "Size of A.next : " << sizeof(Apointer.next) << endl;
    cout << "Size of A.next->next : " << sizeof(Apointer.next->next) << endl;
    cout << "Size of A : " << sizeof(Apointer) << endl;


    cout << "============ A3 =============" << endl;
    ListNode3 A3;

    cout << "Size of A.val : " << sizeof(A3.val_) << endl;
    cout << "Size of A.next : " << sizeof(A3.next) << endl;
    cout << "Size of A.next->val : " << sizeof(A3.val_) << endl;
    cout << "Size of A : " << sizeof(A3) << endl;

    cout << "============ A4 =============" << endl;
    ListNode4 A4;

    cout << "Size of A.val : " << sizeof(A4.val_) << endl;
    cout << "Size of A.next1 : " << sizeof(A4.next1) << endl;
    cout << "Size of A.next2 : " << sizeof(A4.next2) << endl;
    cout << "Size of A : " << sizeof(A4) << endl;
}
