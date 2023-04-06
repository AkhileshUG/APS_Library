#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        
        if(n==1){
            return x;
        }   
        
        if(n==INT_MIN){
            n=n/2;
            x=x*x;
        }
        
        if(n<0){
            n=-n;
            x=1/x;
        }
        
        return n%2==0 ? myPow(x*x,n/2): x*myPow(x*x,n/2);
    }
};