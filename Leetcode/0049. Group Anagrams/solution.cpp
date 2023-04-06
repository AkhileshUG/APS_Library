#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> hashmap;
        
        int i=0;
        for(string str: strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            hashmap[temp].push_back(str);
        }
        
        vector<vector<string>> result;
        
        for(auto c: hashmap){
            result.push_back(c.second);
        }
        
        return result;
    }
};