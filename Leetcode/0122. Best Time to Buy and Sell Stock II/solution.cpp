#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total=0;
        
        int minProfit=prices[0];
        int maxDiff=0;
        
        for(auto price:prices){
            int currProfit=price-minProfit;
            if(currProfit>maxDiff){
                total+=currProfit;
                maxDiff=0;
                minProfit=price;
                continue;
            }
            
            minProfit=min(minProfit, price);
        }
        
        // for(int i=1;i<prices.size(); i++){
        //     total+=max(prices[i]-prices[i-1], 0);
        // }
            
        return total;
    }
};