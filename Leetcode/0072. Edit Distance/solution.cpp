#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.length(), m=word2.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1, INT_MAX)); 
        
        for(int i=0; i<=m; i++){
            dp[n][i] = m-i;
        }
        
        for(int i=0; i<=n; i++){
            dp[i][m] = n-i;
        }
        
        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                if(word1[i] == word2[j]){
                    dp[i][j] = dp[i+1][j+1];
                }else{
					//                 replace, 			delete, insert;
                    dp[i][j] = 1 + min(dp[i+1][j+1], min(dp[i+1][j], dp[i][j+1]));
                }
            }   
        }
        
        return dp[0][0];
    }
};