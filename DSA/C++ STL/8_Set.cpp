/*
    *******
    * Set *
    *******
    
    -Set only stores Unique elements no repetition
    -Once an element has been added you cannot modify that element just ADD or Delete
    -Behind the sceans it is implements with the help of BST

    There are 2 types of set 1.Ordered Set- the set will be in ascending order with starting index being smallest and ending being the largest and the elements you fetch are in ordered also it is slower than unordered.
                             2.Unordered Set- the elements your fetch are in random order as you feed in 

    Functions:  same as array

*/
#include<set>
#include<unordered_set>
#include<iostream>
using namespace std;

// int main(){

//     set<int> s;             //Ordered Set
//     unordered_set<int>p;    //Unordered Set
//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(6);
//     s.insert(6);
//     s.insert(6);
//     s.insert(0);

//     set<int>::iterator it{s.begin()};
//     it++;
//     s.erase(it);
//     s.erase(s.begin(),s.end());     //now we have given a range of elements to be deleted.
    
//     set<int>::iterator itr{s.find(5)};  //this will return the iterator of element 5 for Iterator watch https://www.youtube.com/watch?v=SgcHcbQ0RCQ
//     cout<<"Value present at itr-> "<<*itr<<endl;

//     for(auto i : s){
//         cout<<i<<endl;
//     }
//     cout<<endl;
//     cout<<"Tell weather 5 element is present or not! "<<s.count(5)<<endl;   //count is actually used to find how many times the item is present in an array so here as there are no repeating elements so the count will either be 0 or 1

//     s.clear();      //cleares the entire set
//     s.size();       //tells the number of elements present in s

// }


int main(){

    set<int> st;
    unordered_set<int> p;

    //INSERT
    st.insert(5);           //insert takes Log N time where N is the size of the set
    st.insert(6);           // alternatively st.emplace(6) which is faster for Competative programming
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(9);
    st.insert(2);
    st.insert(3);
    st.insert(1);
    // st[0]=5;            //we cannot access set elements like this 

    //ERASE Functionality
    st.erase(st.begin());                  //log n
    st.erase(5);                           // st.eraser(key) will delete the key 
    //st.erase(st.begin(),st.begin() +2);  //wont work instead you have to use for loop. Let us assume you have to delete a range( st. begin() , st.begin()+2) . Then take a for loop run it 2 times. Then you will a get a pointer (pt) pointing to st.begin()+2 . Then pass it as st.erase(st.begin(),pt) .

    //Find Function
    auto iterator = st.find(2);     //st.find() will return an iterator that points to 1, works in log n
    auto iterator2 = st.find(69);    //if the key is not found it will be iterator = s.end();

    //Other Functionality
    //Same as Vector/Array

    // adding numbers in the set from a user
    // int n;
    // cout<<endl<<"Enter how many numbers you want to enter in a set?->";
    // cin>>n;

    // for(int i{};i<n;i++){
    //     int x;
    //     cin>>x;
    //     st.insert(x);
    // }

    cout<<"First element of the SET is-> "<< *st.begin()<<endl;     // gives the first element of the set
    cout<<"Second element if the SET is-> "<< *st.begin()+1<<endl;  // gives the second element of the set
    cout<<".find(1) returns an iterator and that is-> "<< *iterator;// we had to dereference it to get the value stored at that address which will be the same value we did find for

    
}