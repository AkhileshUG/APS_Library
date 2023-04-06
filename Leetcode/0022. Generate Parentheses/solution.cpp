#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<string> &result, string str, int left, int right){
        if(left ==0 && right == 0){
            result.push_back(str);
            return;
        }
        
        if(left>0){
            dfs(result, str + "(", left-1, right);
        }
        
        if(right>left){
            dfs(result, str + ")", left, right-1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        
        dfs(result,"",n,n);
        
        return result;
    }
};