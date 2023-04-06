#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<string, bool> dp;
    
    bool isScramble(string A, string B) {
        if(A.compare(B) == 0){
        return true;
        }

        if(A.length() <= 1){
            return false;
        }

        string key=A+"_"+B;
        // cout<<key<<endl;

        if(dp.find(key)!=dp.end()){
            return dp[key];
        }

        int n=A.length();
        bool flag=false;

        for(int i=1; i<n; i++){
            bool condition1 = isScramble(A.substr(0,i),B.substr(n-i,i)) 
                            && isScramble(A.substr(i,n-i),B.substr(0,n-i));

            bool condition2 = isScramble(A.substr(0,i),B.substr(0,i)) 
                            && isScramble(A.substr(i,n-i),B.substr(i,n-i));

            if(condition1 || condition2){
                flag=1;
                break;
            }
        }

        return dp[key]=flag;
    }
};