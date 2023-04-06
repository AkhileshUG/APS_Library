#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        vector<int>result(2,-1);
        
        if(!nums.size()){
            return result;
        }
        
        while(low<high){
            int mid = low + ((high-low)/2);
            
            if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        
        if(nums[low]!=target){
            return result;
        }
        
        result[0]=low;
        
        high=nums.size()-1;
        while(low<high){
            int mid = low + ((high-low)/2) + 1;
            
            if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid;
            }
        }
        
        result[1]=high;
        
        return result;
    }
};