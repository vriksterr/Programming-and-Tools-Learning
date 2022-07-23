/*
    Q- https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
    Video- https://www.youtube.com/watch?v=MjCqCvXPKw4 && https://www.youtube.com/watch?v=hGK_5n81drs

    
    First Approach: sort the array in assending order using sort function sort(array) and print the k-1 
                    element from the sorted array.

    Best Approach: we can use priority queue and using that STL we can create an array of the size k and keep
                   popping the outermost element in that array

*/

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //Solution
        priority_queue<int> pq;
        int n=r+1;          //will give us the size of an array
        //push the items to the max heap        
        for(int i{0}; i<k; i++){    
            pq.push(arr[i]);
        }
        //iterating through the remaining elements to see if there is any element smaller than top so we can find the kth smallest element
        for(int i{k}; i<n; i++){
            if(pq.top() > arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends