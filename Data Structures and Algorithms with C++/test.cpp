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
#include<vector>
#include<unordered_map>

using namespace std;
class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
        
        //key at value
        unordered_map<int,int> checker;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){

            int difference = target - nums.at(i);

            //if we find the difference
            if(checker.find(difference) != checker.end()){
                result.push_back(checker.at(difference));
                result.push_back(i);
                return result;
            }
            else{
                checker.insert({nums.at(i),i});
            }
        }
        return result;
    }
};


class Solution2 {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
        
        //key at value
        unordered_map<int,int> checker;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){

            int difference = target - nums.at(i);

            //if we find the difference
            if(checker.find(difference) != checker.end()){
                result.push_back(checker.at(difference));
                result.push_back(nums.at(i));
                return result;
            }
            else{
                checker.insert({i,nums.at(i)});
            }
        }
        return result;
    }
};


int main(){

    vector<int> array{7,1,5,3};
    int target1{10};
    cout<<"Please enter the target you want to search: ";
    // cin>>target1;

    Solution2 a;
    a.twoSum(array,target1);
    
    for(auto x:a.twoSum(array,target1)){
        cout<<x<<",";
    }


}
