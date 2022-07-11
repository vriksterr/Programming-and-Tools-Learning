//  Questions- https://leetcode.com/problems/valid-anagram/

/*
    Given 2 strings, return true if anagrams (same letters diff order)
    Ex. s = "anagram" & t = "nagaram" -> true, s = "rat" & t = "car" -> false

    Count chars, strings should have same # of chars if anagram

    Time: O(n)
    Space: O(26)
*/

//Video Explanation= https://www.youtube.com/watch?v=IRN1VcA8CGc


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        //checking to see of the 2 strings are same or not if not ans is false
        if (s.size() != t.size()) {
            return false;
        }
        
        //we creater a vector names counter and make it of size 26 (coz aphabets have 26 characters) and initialize all with 0 that we will increment for our check to see if two are same or not!
        vector<int> counter(26,0);      
        
        //here we are incrementing and increasing the number at counter position 
        for (int i = 0; i < s.size(); i++) {
            counter[s[i] - 'a']++;              //we get the character from string via s[i] and minus by a to find the correct position to increment we can change it with other characters as well like x,c,g,f etc but change it on both increment and decrement side
        }
        
        //here we are decrementing the total counter
        for (int j = 0; j < t.size(); j++) {
            counter[t[j] - 'a']--;
            if (counter[t[j] - 'a'] < 0) {      //and checking here if it goes below 0
                return false;
            }
        }
        return true;
    }
};

//same as above but cleaner approach
class Solution2 {
public:
    bool isAnagram(string s1, string s2) {
         if(s1.length() != s2.length()) return false;
        int count[256] = {0};

        for(int i = 0 ; i < s1.size(); i++){
            count[s1[i] - 'a']++;
            count[s2[i] - 'a']--;
        }

        for(int i : count) if(i != 0 ) return false;
        return true;
    }
};

//another same as above but slightly different style
class Solution3 {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        if(n!=t.length())return false;
        vector<int>c1(26,0);
         vector<int>c2(26,0);
        for(int i=0;i<n;i++){
            c1[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            c2[t[i]-'a']++;
        }
        if(c1!=c2)return false;
        return true;
        
    }
};

//we can also use sorting but that is not going to be O(n2) coz of sorting algo
class Solution4 {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if (s != t){
          return false;
        }

        return true;
    }
};


int main(){

    string one{"anagram"};
    string two{"nagaram"};
    Solution a;

    cout<<"The two strings are anaragram yes(1) & no(0): "<<a.isAnagram(one,two)<<endl;
    
}