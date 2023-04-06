#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getNFact(int n){
        int f=1;
        for(int i=2; i<=n; i++) f*=i;
        return f;
    }
    
    string getPermutation(int n, int k) {
//         method-1
//         vector<int> nums;
//         for(int i=1; i<=n; i++) nums.push_back(i);

//         for(int i=1; i<k; i++){
//             next_permutation(nums.begin(), nums.end());
//         }

//         string ans="";

//         for(auto num: nums) ans+=to_string(num);

//         return ans;
        
//         method-2
        vector<int> nums;
        for(int i=1; i<=n; i++) nums.push_back(i);

        int fact=n==1||n==0 ? 1 : getNFact(n-1);

        swap(nums[0], nums[(k-1)/fact]);
        sort(nums.begin()+1, nums.end());

        for(int i=1; i<=(k-1)%fact; i++){
            next_permutation(nums.begin()+1, nums.end());
        }

        string ans="";

        for(auto num: nums) ans+=to_string(num);

        return ans;
    }
};