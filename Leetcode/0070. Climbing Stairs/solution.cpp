#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    map<int,int> memo;
    
    int climbStairs(int n) {
        if(memo[n]){
            return memo[n];
        }
        
        int result;
        
        if(n<3){
            result = n;
        }else{
            result = climbStairs(n-1) + climbStairs(n-2);
        }
        
        memo[n]=result;
        
        return memo[n];
    }
};