#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        map<int,int> seen;
        
        for(int i=0;i<=nums.size()-1; i++){
            if(seen[target - nums[i]] > 0){
                return {seen[target - nums[i]]-1, i};
            }
            seen[nums[i]] = i+1;
        }
        
        return {-1, -1};
    }
};