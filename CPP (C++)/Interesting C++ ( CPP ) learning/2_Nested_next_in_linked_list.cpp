#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next; // this keep of going as it initializing the node constructor again and again
};

void delete_middle( Node *name )
{
    Node *tmp = name->next;

    name->value = name->next->value;
    name->next  = name->next->next;

    delete tmp;
}

int main(){
    
    Node test;
    /* The reason we are able to do this nested next after next is coz
       the next is initializing itseft as well again and again */
    test.next->next->next->next->next->next->next->next->next->next->value;
}