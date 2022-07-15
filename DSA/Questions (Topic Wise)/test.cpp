/*   __________________________
    |
    |__________________________


    ***************************
    *
    ***************************


    •
    •
    •

*/
#include <bits/stdc++.h>
using namespace std;
/////////////////////////////////////////////////////////////////////////////////////////////



class Solution {
public:
    int search(vector<int>& nums, int target) {
            int low=0;
            int high=nums.size()-1;
            int mid;
            while(low<=high){
                    mid=low+(high-low)/2;
                    if(nums[mid]==target)
                            return mid;
                    else if(nums[mid]>target)
                            high=mid-1;
                    else
                            low=mid+1;
            }
            return -1;
    }
};

int main(){

    vector<int> array{-1,0,3,5,9,12};
    int target1{9};
    cout<<"Please enter the target you want to search: ";
    // cin>>target1;

    Solution a;
    a.search(array,target1);

}