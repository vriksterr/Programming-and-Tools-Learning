// Here is how to use linked list
// video- https://www.youtube.com/watch?v=HKfj0l7ndbc

#include<iostream>
using namespace std;

class Node{
    public:
        int Value;
        Node *Next;
};

void printList(Node *n){

    while(n != NULL){
        cout<<n->Value<<", ";
        n = n->Next;            // this is the incrementer/iterator.
    }
}

int main(){
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();


    (*head).Value = 1;      //can be written like this or like below
    head->Next = second;

    second->Value = 2;
    second->Next = third;

    third->Value = 3;
    third->Next = NULL;  // or NULL both works

    printList(head);


}