#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>> &result, vector<int> &temp, int start, int count, int n, int k){
        if(count==k){
            result.push_back(temp);
            return;
        }
        
        for(int i=start;i<n;i++){
            temp.push_back(i+1);
            dfs(result,temp,i+1,count+1,n,k);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        if(n<k){
            return {};
        }
        
        vector<vector<int>> result;
        vector<int> temp;
        
        dfs(result,temp,0,0,n,k);
        
        return result;
    }
};