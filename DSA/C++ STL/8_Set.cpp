/*
    *******
    * Set *
    *******

    In set only unique elements are stored lets say if we entered 5 5 times even that set will still have
    just 1 5, as it stores each element only once. behind the sceans it is implements with the help of BST,
    also once an element has been added you cannot modify that element either you can just add or you can
    delete no modification allowed.
    
    There are 2 types of set 1.Ordered Set- the elements you fetch are in ordered also it is slower than
                                            unordered
                             2.Unordered Set- the elements your fetch are not ordered and are in random order 

    Functions:  insert()
                find()
                end()
                begin()
                clear()
                size()
                count()
                erase()

*/
#include<set>
#include<unordered_set>
#include<iostream>
using namespace std;

int main(){

    set<int> s;             //Ordered Set
    unordered_set<int>p;    //Unordered Set
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);

    set<int>::iterator it{s.begin()};
    it++;
    s.erase(it);
    s.erase(s.begin(),s.end());     //now we have given a range of elements to be deleted.
    
    set<int>::iterator itr{s.find(5)};  //this will return the iterator of element 5 for Iterator watch https://www.youtube.com/watch?v=SgcHcbQ0RCQ
    cout<<"Value present at itr-> "<<*itr<<endl;

    for(auto i : s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"Tell weather 5 element is present or not! "<<s.count(5)<<endl;   //count is actually used to find how many times the item is present in an array so here as there are no repeating elements so the count will either be 0 or 1

    s.clear();      //cleares the entire set
    s.size();       //tells the number of elements present in s

}
