/*
    *******
    * Map *
    *******

    Map is a data structure where data is stored in key format for example
    lets say key is vineet and value is scorpio so vineet is pointing to scorpio.

    Remember that all key are unique and that 1 key will point to just 1 value but multiple key can point
    to same value.

    Video: https://www.youtube.com/watch?v=7mwgA9XFIEQ
*/
#include<map>
#include<unordered_map>
#include<iostream>
using namespace std;

int main(){

    map<int,string>m;

    m[1]="vineet";  //Here m[1] is key and vineet is value
    m[2]="Sanjeev";
    m[13]="ramesh";
    m[20]="yogesh";
    m[99]="rashmi";

    m.insert({5,"yogita"}); // this will insert a new key 5 with value being yogita
    m.erase(99);            // will remove key 99
    //print
    for(auto i:m){
        cout<<i.first<<endl;    //will print 1 and 2. The output will be in sorted in sorted map and will be unsorted in unsorted map
    }

    cout<<"Finding 5->"<<m.count(5)<<endl;  //tells weather the specific element is present or not in bool output

    cout<<endl<<"Iterator:"<<endl;
    auto it{m.find(2)};         //here we fount the iterator and then we ran a loop with that iterator
    for(auto i{it}; i != m.end(); i++){
        cout<<(*i).first<<endl;
    }
}