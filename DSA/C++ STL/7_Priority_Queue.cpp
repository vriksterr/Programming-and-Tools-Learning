/*
    ******************
    * Priority Queue *
    ******************

    Stores all in Sorted order and dose it in log N

    Basically we made a que whose first element will be the greatest. In other words it is a type of data
    structure when you put in all the elements and at the time of getting those data back there are only
    two ways either via 
                        1.Max Heap(which means the element you take out from the top will be the maximum element)
                        2.Min Heap(where the element we take out from top will be the minimum)

    Functions:  .push()
                .pop()
                .top()
                .size()
                .empty()
*/
#include<queue>
#include<iostream>
using namespace std;

int main(){
    
    priority_queue<int>max;                            //when we initialize like this it is Max Heap
    priority_queue<int,vector<int>,greater<int>>min;   //this will give Min Heap


    //FOR MAX HEAP
    max.push(1);
    max.push(3);
    max.push(2);
    max.push(0);

    //Printing so we are getting the biggest element and then removing it so we get the next biggest this way we can print the max
    int n{max.size()};  // the reason why we did this is coz the size is changing as we are popping at each loop
    for(int i{}; i<n; i++){
        cout<<max.top()<<endl;
        max.pop();
    }
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    //FOR MIN HEAP

    min.push(5);
    min.push(1);
    min.push(0);
    min.push(4);

    int n2{min.size()};  
    for(int i{}; i<n2; i++){
        cout<<min.top()<<endl;
        min.pop();
    }

    cout<<"Empty or not-> "<<max.empty();   // this will show empty as we popped all
}