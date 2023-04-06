#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int,int>> Q;
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j]==0){
                    Q.push({i,j});
                }
            }
        }
        
        while(!Q.empty()){
            auto [row ,col]=Q.front();
            Q.pop();
            
            for(int i=0; i<matrix[row].size(); i++){
                if(matrix[row][i]){
                    matrix[row][i]=0;
                }
            }
            for(int i=0; i<matrix.size(); i++){
                if(matrix[i][col]){
                    matrix[i][col]=0;
                }
            }
        }
    }
};