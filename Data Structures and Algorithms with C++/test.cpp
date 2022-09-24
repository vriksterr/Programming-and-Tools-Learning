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

#include<iostream>
using namespace std;

class ListNode{
    public:
        int value;
        ListNode *next;

    ListNode(int val){
        value = val;
    }
};

class LinkedList{
    ListNode *Head;
    ListNode *Tail;

    LinkedList(){
        Head = new ListNode(-1);
        Tail = Head;
    }
};

int main(){

}
