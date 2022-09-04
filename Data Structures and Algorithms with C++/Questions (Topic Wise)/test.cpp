/*
     __________________________
    |
    |__________________________

    ***************************
    *
    ***************************


    •
    •
    •

*/
// #include <bits/stdc++.h>
// using namespace std;
// /////////////////////////////////////////////////////////////////////////////////////////////

// class Student{
//     public:

//         int a{5};
// };

//  int main(){
    

// }

#include <iostream>

using namespace std;

//making are declaring a Node and the values it is going to hold
class ListNode {
public:
    int val_;
    ListNode *next = nullptr;

    ListNode(int val) {
        val_ = val;
    }
};

// Implementation for Singly Linked List
class LinkedList {
public:
    ListNode *head{nullptr};
    ListNode *tail;

    LinkedList() {

        // Init the list with a 'dummy' node which makes removing a node from the beginning of list easier.
        head = new ListNode(-1);
        cout<<"Address of the head:"<<&head<<endl;
        tail = head;
    }

    void insertEnd(int val) {
        tail->next = new ListNode(val);
        tail = tail->next;
    }

    void remove(int index) {
        int i = 0;
        ListNode *curr = head;
        while (i < index && curr) {
            i++;
            curr = curr->next;
        }
        
        // Remove the node ahead of curr
        if (curr) {
            curr->next = curr->next->next;
        }
    }

    void print() {
        ListNode *curr = head->next;
        while (curr) {
            cout << curr->val_ << " -> ";
            curr = curr->next;
        }
        cout << endl;
    }
};   

int main(){
    LinkedList first;
    cout<<"Address of the first: "<<&first<<endl;
    /* when you come back look into how the this is working in a bit indepth between linkedlist
       and listnode, and look for the answers what this is actually referring to */
    first.insertEnd(1);
    first.insertEnd(2);
    first.insertEnd(3);
    first.insertEnd(4);
    first.insertEnd(5);

    first.print();
}