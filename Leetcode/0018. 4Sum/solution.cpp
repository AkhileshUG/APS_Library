#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        set<vector<int>> answer;
        vector<vector<int>> result;
        
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            if(nums[i]+nums[i+1]>target-(nums[i+2]+nums[i+3])) break;
            if(nums[i]+nums[n-3]<target-(nums[n-2]+nums[n-1])) continue;
            
            for(int j=i+1; j<n-2; j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                if(nums[i]+nums[j]>target-(nums[j+1]+nums[j+2])) break;
                if(nums[i]+nums[j]<target-(nums[n-2]+nums[n-1])) continue;
                
                int low=j+1;
                int high=n-1;

                while(low<high){
                    long sum=nums[i]+nums[j]+nums[low]+nums[high];

                    if(sum==target){
                        answer.insert({nums[i], nums[j], nums[low], nums[high]});
                    }

                    if(sum>=target){
                        high--;
                    }else{
                        low++;
                    }
                }
            }
        }
        
        for(auto ans: answer){
            result.push_back(ans);
        }

        return result;
    }
};