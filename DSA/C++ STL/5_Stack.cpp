/*
    *********
    * Stack *
    *********

    Let's understand what is stack: (basically last in first out)
    lets say you went to an indian marrage and there you wanted to eat food after meeting your friends, so 
    you go to the table where the food plates are stacked on top of each other so you pick the first plate
    from the stack and your firend will pick the next plate in that stack after your and someone else will
    pick the next available one after your friend. Now remember that the plates at the botter of the stack
    is placed first of the table and the the top available one at the last.

    Basically: Last in First Out!

    Functions:  .push() or emplace
                .pop()
                .top()
              X  .front()  //dosent work here only top()
              X  .back()
              X  .push_back()
                rest all same as vector/array

*/
#include<stack>
#include<iostream>
using namespace std;

int main(){
    stack<string> s;

//Insertion
    s.push("vineet");
    s.push("rohit");
    s.push("yogita");
    s.push("rashmi");
    s.push("manas");

//Deletion
    s.pop();    //the last added element will get popped first that is yogita RIP buddy

    //to delete the entire stack there is only this type way!
    while(!s.empty()){
        s.pop();
    }
    
    
    cout<<"Top Element-> "<<s.top()<<endl;             //will print the last element as it is in the top stack, also dont call top if stack is empty or use a if(!s.empty()){s.top};
    // cout<<"Bottom Element-> "<<s.bottom()<<endl;    //wont work
    cout<<"Size of stack-> "<<s.size()<<endl;
    cout<<"Empty or not-> "<<s.empty()<<endl;
}