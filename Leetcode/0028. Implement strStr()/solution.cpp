#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()==0 && needle.length()==0) return 0;
        if(haystack.length()!=0 && needle.length()==0) return 0;
        if(haystack.length()==0 && needle.length()!=0) return -1;
        
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                int j;
                for(j=1;j<needle.length();j++){
                    if(haystack[i+j]!=needle[j]){
                        break;
                    }
                }
                if(j==needle.length()){
                    return i;
                }
            }
        }
        
        return -1;
    }
};