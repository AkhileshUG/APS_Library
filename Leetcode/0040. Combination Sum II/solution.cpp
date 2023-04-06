#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     void  combinationSum2(vector<int>& candidates, vector<vector<int>> &result, vector<int>& subset, int target, int start) {
        if(target == 0){
            if(find(result.begin(), result.end(), subset) == result.end()){
                result.push_back(subset);
            }
            return;
        }
        
        for(int i=start; i<candidates.size() && target >= candidates[i]; i++){
            if(i != 0 && candidates[i] == candidates[i-1] && i>start) continue;
            
            subset.push_back(candidates[i]);
            combinationSum2(candidates, result, subset, target-candidates[i], i+1);
            subset.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        
        if(candidates.empty()){
            return result;
        }
        
        sort(candidates.begin(), candidates.end());
        
        vector<int> subset;
        
        combinationSum2(candidates, result, subset, target, 0);
        
        return result;
    }
};