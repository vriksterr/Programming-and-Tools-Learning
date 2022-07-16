// Q- https://leetcode.com/problems/reverse-linked-list/
// Video- https://www.youtube.com/watch?v=XgABnoJLtG4

/*
    Given the head of a singly linked list, reverse list & return
    Ex. head = [1,2,3,4,5] -> [5,4,3,2,1], head = [1,2] -> [2,1]

    Maintain prev, curr, & next pointers, iterate thru & reverse

    Time: O(n)
    Space: O(1)
*/


#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}            // can look in class and objects or read this article -> https://leetcode.com/problems/add-two-numbers/discuss/122357/c-what-does-listnodeint-x-valx-nextnull-mean
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
//Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        //creating 2 aditional pointer that we are going to be using as temp storeage to form link
        ListNode *prev = NULL;
        // ListNode *curr = head;
        ListNode *next = head->next;        //we need it initially so we declared it
        
        while (head != NULL) {
            //we are switching addresses
            next = head->next;      //here next is pointing to the next head 
            head->next = prev;      //here we replaces the current pointer pointing to previous node

            prev = head;
            head = next;
        }
        
        return prev;    // here previous become the new head
    }
};