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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> map;
        vector<int> ans;
                
        for(int i{}; i<nums.size(); i++){
            // map.insert({nums[i],(nums[i])++});
            // // (map[i])++;
            if(map.find(nums[i]) != map.end()){
                (map[i])++;
            }
            else{
                map.insert({nums[i],0});
            }
        }
        for(auto it{map.begin()}; it != map.end(); it++ ){
            ans.push_back((*it).first);    //or cout<<it->first<<" "<<it->second;
        }

        return ans;

    }
};

int main(){

    vector<int> n{1,1,1,2,2,3};
    int k{2};

    Solution a;
    a.topKFrequent(n,k);
}