#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        int n=s.length();
        
        map<char, int> hash={
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        num+=hash[s.back()];
        
        for(int i=n-2; i>=0; i--){
            if(hash[s[i]]<hash[s[i+1]]){
                num-=hash[s[i]];
            }else{
                num+=hash[s[i]];
            }  
        }
        
        return num;
    }
};