// Questions- https://leetcode.com/problems/two-sum/

/*
    Given int array & target, return indices of 2 nums that add to target
    Ex. nums = [2,7,11,15] & target = 9 -> [0,1], 2 + 7 = 9

    At each num, calculate complement, if exists in hash map then return

    Time: O(n)
    Space: O(n)
*/
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            //seeing if it exist in hashmap
            if (hashmap.find(complement) != hashmap.end()) {
                result.push_back(hashmap[complement]);
                result.push_back(i);
                break;
            } 
            else {
                hashmap.insert({nums[i], i});
            }
        }
        
        return result;
    }
};



//O(n^2)
class Solution2 {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
      
        vector<int> output;
        for(int i{}; i<nums.size(); i++){
            for(int j{i+1}; j<nums.size();j++){
                if((nums[i]+nums[j]) == target){
                    
                    output.push_back(i);
                    output.push_back(j);

                    //Printing dont add this to leetcode
                    cout<<endl<<"The output is: [";
                    for(int i{}; i<output.size(); i++){
                        cout<<output.at(i)<<", ";
                    }
                    cout<<"]"<<endl;
                    //Printing over
                    return output;
                }
            }
        }
     return output;
    }
    
};


int main(){

    vector<int> array{2,7,11,15};
    int target1{9};
    cout<<"Please enter the target you want to search: ";
    // cin>>target1;

    Solution a;
    a.twoSum(array,target1);

}