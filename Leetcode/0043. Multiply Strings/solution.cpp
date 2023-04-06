#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.length();
        int n = num2.length();
        
        if(m==0 || n==0 || num1 == "0" || num2 == "0"){
            return "0";
        }
        
        if(num1 == "1"){
            return num2;
        }
        if(num2 == "1"){
            return num1;
        }
        
        vector<int> result(m+n, 0);
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                int prod = (num1[i] - '0') * (num2[j] - '0');
                
//                 adding prev values
                prod += result[i+j+1];
                
//                 adding the new product
                result[i+j+1] = prod % 10;
                result[i+j] += prod / 10;
            }   
        }
        
        string ans="";
        
        for(auto num: result){
            if(num == 0 && ans.length() == 0) continue;
            
            ans += (num + '0');
            cout<<num;
        }
        
        return ans;
    }
};