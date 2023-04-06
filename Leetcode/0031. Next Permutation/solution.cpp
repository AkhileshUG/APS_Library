#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool static compare(int a, int b){
        return a>b;
    }
    
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        
        // if(is_sorted(nums.begin(), nums.end(), compare)){
        //     reverse(nums.begin(), nums.end());
        //     return;
        // }
        
        int i=n-2;
        
        while(i>=0 && nums[i] >= nums[i+1]){
            i--;
        }
        
        if(i>=0){
            int j=n-1;
            
            while(nums[i]>=nums[j]){
                j--;
            }
            
            swap(nums[i], nums[j]);
        }
        
       reverse(nums.begin()+i+1, nums.end());
    }
};