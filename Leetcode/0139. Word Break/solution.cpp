#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.length()+1, false);
        dp[s.length()]=true;
        
        for(int i=s.length()-1; i>=0; i--){
            for(auto str: wordDict){
                if(i+str.length() <= s.length() && str==s.substr(i,str.length())){
                    dp[i] = dp[i + str.length()];
                }
                if(dp[i]){
                    break;
                }
            }
        }
        
        return dp[0];
    }
};