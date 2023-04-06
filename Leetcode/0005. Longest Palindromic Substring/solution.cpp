#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void palindrome(string s, int start, int end, int &low, int &maxLen){
        while(start >= 0 && end < s.length() && s[start] == s[end]){
            start--;
            end++;
        }
        
        int len = end - start - 1;
        if(maxLen < len){
            maxLen = len;
            low = start+1;
        }
    }
    
    string longestPalindrome(string s) {
        if(s.length() < 2){
            return s;
        }
        
        int low = 0, maxLen=0;
        
        for(int i=0; i<s.length()-1; i++){
            palindrome(s, i, i, low, maxLen);  // odd length
            palindrome(s, i, i+1, low, maxLen);  // even length
        }
        
        return s.substr(low, maxLen);
    }
};