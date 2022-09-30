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

#include <iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(head == NULL) return false;

        ListNode *runner1 = head;
        ListNode *runner2 = head;

        while(runner1->next != NULL && runner1->next->next != NULL){
            runner1 = runner1->next->next;
            runner2 = runner2->next;

            if(runner1 == runner2) return true;
        }
        return false;
    }
};