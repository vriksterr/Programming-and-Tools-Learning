/*
    *********
    * Queue *
    *********

    Queue is simple to understand it is like a line outside a movie theater the first one in the queue will
    get the ticket first and the last guy at the last!
*/
#include<queue>
#include<iostream>
using namespace std;

int main(){

    queue<string> q;

    q.push("vineet");
    q.push("harsh");
    q.push("sanjeev");
    q.pop();            // the first element added will be removed in queue

    cout<<"First Element "<<q.front()<<endl;
    cout<<"Size-> "<<q.size()<<endl;
}