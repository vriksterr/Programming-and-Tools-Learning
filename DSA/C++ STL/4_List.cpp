/*
    ********
    * List *
    ********

    It is a dublin linked list that means that it will have a starting and an ending element pointer.
    Direct access is not possible in List.
*/
#include<list>
#include<iostream>
using namespace std;

int main(){
    list<int>l;
    list<int>l(5,100);  //size if 5 and all those position are initialized to 100
    list<int> n{l};     //the l list has been copied to n list.
    
    l.push_back(1);
    l.push_front(2);
    l.pop_back();
    l.pop_front();
    l.erase(l.begin()); //will erase the the element from the given arguments.

    cout<<"Size of List-> "<<l.size()<<endl;      
}