#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        
        int i=0,j=0;
        for(;i<nums1.size()&&j<nums2.size();){
            if(nums1[i]<nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }else{
                result.push_back(nums2[j]);
                j++;
            }
        }
        
        for(;i<nums1.size();i++){
            result.push_back(nums1[i]);
        }
        
        for(;j<nums2.size();j++){
            result.push_back(nums2[j]);
        }
        
        int n=result.size();
        
        if(n%2==0){
            n=n-1;
            return (result[n/2]+result[(n/2)+1])/2.0;
        }
        
        return result[n/2];
    }
};