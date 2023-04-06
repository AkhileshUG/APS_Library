#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        
        int m=a.length()-1,n=b.length()-1; 
        int carry=0;
        
        while(m>=0 || n>=0){
            int sum=carry;
            if(m>=0) sum+=a[m--]-'0';
            if(n>=0) sum+=b[n--]-'0';
            result.push_back((sum%2)+'0');
            carry=sum/2;
        }
        
        if(carry!=0) result.push_back(carry+'0');
            
        reverse(result.begin(),result.end());
        return result;
    }
};