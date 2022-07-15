//Q- https://leetcode.com/problems/binary-search/

#include <bits/stdc++.h>
using namespace std;

/*
    Given sorted int array, search for a target value
    Ex. nums = [-1,0,3,5,9,12], target = 9 -> 4 (index)

    Since array is sorted, perform binary search

    Time: O(log n)
    Space: O(1)
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                return mid;
            }
        }
        
        return -1;
    }
};

//My solution but self implement binary search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        bool ans = binary_search(nums.begin(),nums.end(),target);
        int r;
        
        // if(nums[0] < 0){nums[0] * -1;}
        if(ans == true){
            auto it = find(nums.begin(),nums.end(),target); 
            r = nums.begin() - it;
            
            //if the r is negative coz the first element is negative
            if(r<0){r = r * -1;}
        }
        else{return -1;}
        return r;
    }
};

int main(){

    vector<int> array{2,1,5,3};
    int target1{4};
    cout<<"Please enter the target you want to search: ";
    // cin>>target1;

    Solution a;
    a.search(array,target1);

}