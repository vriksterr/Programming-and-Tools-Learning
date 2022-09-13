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
// #include<iostream>
// using namespace std;


// int main(){
//     int $;
// }

#include<iostream>
#include<vector>
#include<set>
using std::vector;
using std::set;
using std::cout;

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
        
//         set<int> set;

//         //take values of num and search these values inside set
//         for(int i=0; i<nums.size(); i++){
//             int number_to_search = nums.at(i);
//             if(set.find(number_to_search) == number_to_search){
//                 return true;
//             }
//         }
//         //if you find it that means that the value is present return true if not then false
//     }
// };


class Test{
    public:

        set<int> set{1,6,3,4,5,9,2};
};

int main(){
    Test search;

    auto value = search.set.find(11);
}