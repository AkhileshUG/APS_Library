#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        dp[0]=nums[0];
        int maxSum = nums[0];
        
        for(int i=1;i<nums.size();i++){
            dp[i] = nums[i] + (dp[i-1]>0?dp[i-1]:0);
            maxSum = max(maxSum, dp[i]);
        }
        
        return maxSum;
    }
};