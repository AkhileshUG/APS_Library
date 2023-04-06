#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {};
        
        vector<int>result;
        
        int M=matrix.size();
        int N=matrix[0].size();
        
        int lastRow=M-1,firstRow=0;
        int lastCol=N-1,firstCol=0;
        
        while(result.size()<M*N){
            for(int j=firstCol;j<=lastCol;j++){
                result.push_back(matrix[firstRow][j]);
            }
            firstRow++;
            
            for(int j=firstRow;j<=lastRow;j++){
                result.push_back(matrix[j][lastCol]);
            }
            lastCol--;
            
            if(firstRow<=lastRow){
                for(int j=lastCol;j>=firstCol;j--){
                    result.push_back(matrix[lastRow][j]);
                }
            }
            lastRow--;
            
            if(firstCol<=lastCol){
                for(int j=lastRow;j>=firstRow;j--){
                    result.push_back(matrix[j][firstCol]);
                }
            }
            firstCol++;
        }
        return result;
    }
};