/*
     __________________________
    |
    |__________________________

    ***************************
    *
    ***************************


    •
    •
    •

*/
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        

        // make a for loop for the string and in that for loop we can
            // 1) if i != i+1; return false
            //i++

        // if the starting bracket is ) ] } then its a flase 
        if(s.at(0) == ')' || s.at(0) == ']' || s.at(0) == '}') return false;

        for( int i = 0; i<s.size(); i++){ 
            char current = s[i];
            char next = s.at(i+1);
            if( current != next) return false;
            
        }
            
        return true;
    }
};

int main(){

   Solution A;
   string brackets = "()";
   
    cout<<boolalpha;
   cout<< A.isValid(brackets);
   
}
