#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void  combinationSum(vector<int>& candidates, vector<vector<int>> &result, vector<int>& subset, int target, int start) {
        if(target == 0){
            result.push_back(subset);
            return;
        }
        
        for(int i=start; i<candidates.size() && target >= candidates[i]; i++){
            subset.push_back(candidates[i]);
            combinationSum(candidates, result, subset, target-candidates[i], i);
            subset.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> result;
        
        if(candidates.empty()){
            return result;
        }
        
        sort(candidates.begin(), candidates.end());
        
        vector<int> subset;
        
        combinationSum(candidates, result, subset, target, 0);
        
        return result;   
    }
};