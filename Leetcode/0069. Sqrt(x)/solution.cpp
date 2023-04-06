#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        
        int low=1,high=x;
        
        while(low<high){
            long mid = low + ((high-low)/2);
            long sq=mid*mid;
            
            if(sq == x){
                return mid;
            }
            
            if(sq > x){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        
        return low-1;
    }
};