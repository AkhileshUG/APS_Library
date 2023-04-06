#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        
        int start=0, end=height.size()-1;
        
        while(start<end){
            int h = min(height[start], height[end]);
            
            area=max(area, (end-start)*h);
            
            while(height[start] <= h && start<end) start++;
            while(height[end] <= h && start<end) end--;
        }
        
        return area;
    }
};