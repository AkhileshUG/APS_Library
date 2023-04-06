#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()){
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        
        int maxLen=0;
        int len=1;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]==nums[i]-1){
                len++;
            }else if(nums[i-1]!=nums[i]){
                maxLen=max(maxLen, len);
                len=1;
            }
        }
        
        return max(maxLen, len);
        
//         int maxLen=0;
//         map<int, bool> count;
        
//         for(auto num:nums){
//             count[num]=true;
//         }
        
//         for(auto num:nums){
//             if(!count[num-1]){
//                 int currNum=num;
//                 int len=1;
                
//                 while(count[currNum+1]){
//                     currNum+=1;
//                     len++;
//                 }
                
//                 maxLen=max(maxLen, len);
//             }
//         }
        
//         return maxLen;
    }
};