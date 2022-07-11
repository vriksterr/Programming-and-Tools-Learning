//  Question- https://leetcode.com/problems/contains-duplicate/

/*
    Given int array, return true if any value appears at least twice
    Ex. nums = [1,2,3,1] -> true, nums = [1,2,3,4] -> false

    If seen num previously then has dupe, else insert into hash set

    Time: O(n)
    Space: O(n)
*/

/*
    so we have an array nums and we are supposed to find an repeating element in that array!
    
    so we create a unordered set named "set" and we pick each element from nums and see if it 
    is present in "set" if it is not present we add that element in the "set" and move to the next
    one and see if it is present in the set if it is we return true, and if no elements are repeting
    we return false.

*/

class Solution {
public:
    bool containsDuplicate(vector<int>&nums) {
    unordered_set<int> set;
    for (int i = 0; i < nums.size(); i++) {
            if (set.find(nums[i]) != set.end()) {
                return true;
            }
            set.insert(nums[i]);
        }
        
        return false;
    }
};
