#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0, end=0;
        int maxLength=0;
        
        map<char,int> count;
        
        while(end < s.length()){
            if(!count[s[end]]){
                count[s[end]] = true;
                end++;
                int curr_size = count.size();
                maxLength = max(maxLength, curr_size);
            }else{
                count.erase(s[start]);
                start++;
            }
        }
        
        return maxLength;
    }
};