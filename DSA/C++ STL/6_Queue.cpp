/*
    *********
    * Queue *
    *********
    
    FIFO Operation
    Queue is simple to understand it is like a line outside a movie theater the first one in the queue will
    get the ticket first and the last guy at the last!

    Functions: .front()     // first element
             X .end()       //not going to work
             X .push_back()
             X .erase()
                rest all same as stack and vector
*/
#include<queue>
#include<iostream>
using namespace std;

int main(){

    queue<string> q;
    queue<int>r;

    q.push("vineet");
    q.push("harsh");
    q.push("sanjeev");
    q.pop();            // the first element added will be removed in queue

//Delete
    while(!q.empty()){
        q.pop();
    }

    cout<<"First Element "<<q.front()<<endl;    //winn be vineer as FIFO applies
    cout<<"Size-> "<<q.size()<<endl;
}