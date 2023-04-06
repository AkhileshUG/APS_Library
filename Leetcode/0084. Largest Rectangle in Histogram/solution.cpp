#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int area=0;
        int top=-1, i=0;
        int n=heights.size();
        
        while(i<n){
            if(s.empty() || heights[s.top()] <= heights[i]){
                s.push(i++);
            }else{
                top=s.top();
                s.pop();
                
                int curr_area = heights[top] * (s.empty()?i:(i-s.top()-1));
                area=max(area,curr_area);
            }
        }
        
        while(!s.empty()){
            top=s.top();
            s.pop();

            int curr_area = heights[top] * (s.empty()?i:(i-s.top()-1));
            area=max(area,curr_area);
        }
        
        return area;
    }
};