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
#include<stack>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int Left = 0;
        int Right = nums.size() - 1;

        while (Left <= Right)
        {
            int mid = Left + (Right - Left)/2;

            if(target > nums.at(mid)){
                Left = mid+1;
            }
            else if(target < nums.at(mid)){
                Right = mid-1;
            }
            else return mid;
        }
        return -1;
    }
};

int main(){

   Solution A;

   vector<int> nums{1,2,3,4};
   int target{4};

   cout<<A.search(nums,target);
}
