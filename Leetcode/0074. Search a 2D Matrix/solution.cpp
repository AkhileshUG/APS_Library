#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size(); i++){
            if(target >= matrix[i].front() && target <= matrix[i].back()){
                // vector<int> search(matrix[i].begin(), matrix[i].end());
                int left=0, right=matrix[i].size()-1;
                
                while(left<=right){
                    int mid = left + ((right-left)/2);
                    
                    if(matrix[i][mid] == target){
                        return true;
                    }
                    
                    if(matrix[i][mid]> target){
                        right=mid-1;
                    }else{
                        left=mid+1;
                    }
                }
                return false;
            }
        }
        
        return false;
    }
};