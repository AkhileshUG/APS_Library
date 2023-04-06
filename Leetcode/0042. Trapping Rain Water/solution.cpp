#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0, leftMax=-1;
        int right=n-1, rightMax=-1;
        
        int ans=0;
        
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftMax){
                    leftMax=height[left];
                }else{
                    ans+=(leftMax-height[left]);
                }
                left++;
            }else{
                if(height[right]>=rightMax){
                    rightMax=height[right];
                }else{
                    ans+=(rightMax-height[right]);
                }
                right--;
            }
        }
        
        return ans;
    }
};