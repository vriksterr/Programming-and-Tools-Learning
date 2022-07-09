/*
    **********
    * Vector *
    **********

    Vector is build upon array but the the speciality it is dynamic that means we can add endless 
    elements without wooring about the size.

    Note each time the vector fills up the size of vector doubles each time we add a new element.
    
*/

#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector<int>v;
    vector<int>w(5,0);  //meaning that the size of the vector is 5 and all the elements will be initialized to 0
    cout<<"Capacity->"<<v.capacity()<<endl;     //tells the capacity of the vector. it will double each time we add a new element when it fills up (basically tells how much space/memory available for elements to be added)
    cout<<"Size->"<<v.size()<<endl;             //will tell the size of the array (basically how many elements are there)

    v.push_back(1);     //adds an element at the end of the vector
    v.push_back(2);
    v.push_back(3);

    v.pop_back();   //removes the last element in the vector
    v.clear();      //empties the vector ie all the elements are removed from the vector but the capacity remains unchanged

    cout<<"Element at 2nd Index-> "<<v.at(2)<<endl;
    cout<<"Vector Empty or not-> "<<v.empty()<<endl;   //.empty will give a bool output telling weather the given Vector is empty or not.
    cout<<"Vector First Element-> "<<v.front()<<endl;  //will give first element of an Vector
    cout<<"Vector Last Element-> "<<v.back()<<endl;    //will give last element of an Vector\

    //output of a vector
    for(int i{}; i<=v.size(); i++){
        cout<<v.at(i)<<", ";
    }
    cout<<endl;
}