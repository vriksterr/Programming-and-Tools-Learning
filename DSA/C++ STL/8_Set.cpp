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
*/
#include<set>
#include<iostream>
using namespace std;

int main(){

    set<int> s;

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
    
    set<int>::iterator itr{s.find(5)};  //this will return the iterator of element 5
    cout<<"Value present at itr-> "<<*itr<<endl;

    for(auto i : s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"Tell weather 5 element is present or not! "<<s.count(5)<<endl;


}
