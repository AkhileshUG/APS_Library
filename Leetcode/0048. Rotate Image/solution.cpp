#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int low=0, high=matrix.size()-1;
        
        // while(low<high){
        //     for(int i=0; i<matrix[low].size();i++){
        //         swap(matrix[low][i], matrix[high][i]);
        //     }
        //     low++;
        //     high--;
        // }
        
        reverse(matrix.begin(), matrix.end());
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=i+1, k=i+1; j<matrix[i].size() && k<matrix.size(); j++, k++){
                swap(matrix[i][j], matrix[k][i]);
            }
        }
    }
};