#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string commonPrefix(string &str1, string str2){
        int minLen=min(str1.length(), str2.length());
        
        for(int i=0; i<minLen; i++){
            if(str1[i]!=str2[i]){
                return str1.substr(0,i);
            }
        }
        
        return str1.substr(0, minLen);
    }
    
    string longestCommonPrefix(vector<string>& strs, int left, int right) {
        if(left==right){
            return strs[left];
        }
        
        int mid=(left+right)/2;
        string lcpLeft=longestCommonPrefix(strs,left,mid);
        string lcpRight=longestCommonPrefix(strs,mid+1,right);
        
        return commonPrefix(lcpLeft,lcpRight);
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        // int minLength=1000;
        // for(auto str:strs){
        //     if(str.length()<minLength){
        //         minLength=str.length();
        //     }
        // }
        // string pre;
        // int i=0;
        // while(i<minLength){
        //     int j=0;
        //     char check=strs[0][i];
        //     for(auto str:strs){
        //         if(str[i]==check){
        //             j++;
        //         }else{
        //             return pre.length()?pre:"";
        //         }
        //     }
        //     if(j==strs.size()){
        //         pre.push_back(check);
        //     }
        //     i++;
        // }
        // return pre.length()?pre:"";
        
        return longestCommonPrefix(strs, 0, strs.size()-1);
    }
};