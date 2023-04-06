#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        
        for(auto num:nums){
            result ^= num;
        }

		/**
		 * nums = [2,1,3,5,2,1,3]
		 * result = 0 ^ 2 ^ 1 ^ 3 ^ 5 ^ 2 ^ 1 ^ 3
		 * XOR with same no. is 0 and it obeys commutative property
		 * result = 0 ^ 1 ^ 1 ^ 2 ^ 2 ^ 3 ^ 3 ^ 5 (after rearrangement)
		 * result = 0 ^ 0 ^ 0 ^ 0 ^ 5 
		 * result = 5
		 */
        
        return result;
    }
};