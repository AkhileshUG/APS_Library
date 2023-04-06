#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void permutations(vector<int>& nums, vector<vector<int>> &result, int start){
        if(start == nums.size()){
            if(find(result.begin(), result.end(), nums) == result.end()){
                result.push_back(nums);
            }
            return;
        }
        
        for(int i=start; i<nums.size(); i++){
            swap(nums[i], nums[start]);
            permutations(nums, result, start+1);    
            swap(nums[i], nums[start]);
        }    
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        
        if(nums.empty()){
            return result;
        }
        
        sort(nums.begin(), nums.end());
        
        permutations(nums, result, 0);
        
        return result;
    }
};