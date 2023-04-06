#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                pivot=i+1;
                break;
            }
        }
        
        // cout<<pivot<<endl;
        sort(nums.begin(),nums.end());
        
        int low=0,high=nums.size()-1,pos=-1;
        
        while(low<=high){
            int mid=low+((high-low)/2);
            
            if(nums[mid] == target){
                pos = mid;
                break;
            }
            
            if(nums[mid] < target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        if(pos != -1){
            return (pivot+pos)%nums.size();
        }
        return -1;
    }
};