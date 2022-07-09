/*
    *********
    * Deque *
    *********

    In the case of vecotr and array we had a continious memory to store data but that is not the case in 
    deque where we have have multiple fixed static arrays and the data stored location is also stored.

    Advantages: 1.we can do insertion and deletion on both ends
                2.random access is possible same as array and vector
                2.it is also dynamic as vector
*/
#include<deque>
#include<iostream>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.pop_front();
    //will delete the first element
    d.erase(d.begin(),d.begin()+1);    //here we have to give the arguments from where to where we want to delete which can me single element, range of elements.
    cout<<endl;

    cout<<"Print First Index Element-> "<<d.at(1)<<endl;
    cout<<"Front Element: "<<d.front()<<endl;
    cout<<"Back Element: "<<d.back()<<endl;
    cout<<"Empty or not give me bool output->"<<d.empty()<<endl;
}