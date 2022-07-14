// Q-https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minValue = prices[0];
        int maxDiff = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            minValue = min(minValue, prices[i]);
            maxDiff = max(maxDiff, prices[i] - minValue);
        }
        
        return maxDiff;
    }
};


//Passing test case but buffer overflow so use the above one !
class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        
        auto L{prices.begin()};
        auto R{prices.begin()+1};
        int max_profit{0};
        

    //    for(int i{}; i<prices.size(); i++){
            while((*R) < (*L)){
                R++;
                L++;
            }
            while((*R) > (*L)){
                int current_profit{(*R)-(*L)};
                
                if(current_profit > max_profit){
                    max_profit = current_profit;
                }
                
                if(R == prices.end()-1){
                    break;
                }
                R++;
            }
    //    }
        return max_profit;
    }
};

int main(){
    vector<int>w{7,1,5,3,6,4};

    Solution a;

    a.maxProfit(w);



    // auto L{w.begin()};
    // auto R(w.begin()+1);

    // cout<<*L<<endl;
    // cout<<*R<<endl;


}