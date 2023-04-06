#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        // int reach = 0, n=nums.size();
        
        // for(int i=0; reach<n && reach<=i; reach++){
        //     i = max(nums[reach] + reach, i);
        // }
        
        // return reach == n;
        
        int n = nums.size();
        int lastGoodIndexPosition = n-1;
        
        for(int i = n-1; i>=0; i--){
            if(nums[i] + i >= lastGoodIndexPosition){
                lastGoodIndexPosition = i;
            }
        }
        
        return lastGoodIndexPosition == 0;
    }
};