#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> pad={
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        
        vector<string> result;
        result.push_back("");
        
        for(auto digit : digits){
            vector<string> temp;
            for(auto chars : pad[digit - '0']){
                for(auto str:result){
                    temp.push_back(str+chars);
                }
            }
            result.swap(temp);
        }
        return result;
    }
};