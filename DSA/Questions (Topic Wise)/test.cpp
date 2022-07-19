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
#include <bits/stdc++.h>
using namespace std;
/////////////////////////////////////////////////////////////////////////////////////////////

  struct ListNode {
      int val;
      ListNode *next;

      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}            // can look in class and objects or read this article -> https://leetcode.com/problems/add-two-numbers/discuss/122357/c-what-does-listnodeint-x-valx-nextnull-mean
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {


        if(list1 == NULL && list2 == NULL){
            return NULL;
        }

        if(list1 == NULL){
            return list2;
        }

        if(list2 == NULL){
            return list1;
        }

    ListNode *head{NULL};
    ListNode *l1{NULL};
    ListNode *l2{NULL};
    
    //we are deciding which list is smaller and should be the starting head.
        if(list1->val <= list2->val){
            head = list1;       //as list1 will be the starting address of the val node
            l1 = list1->next;
        }
        else{
            head = list2;
            l2 = list2->next;
        }

    ListNode *curr = head;  //the head we get above will be stored in the curr

    while( list1 != NULL && list2 != NULL){

        if(l1->val <= l2->val){
            curr->next = l1;
            l1 = list1->next;
        }
    }
        

    }
};