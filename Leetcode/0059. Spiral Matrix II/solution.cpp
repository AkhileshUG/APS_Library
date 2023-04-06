#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        
        int rowStart=0, rowEnd=n-1;
        int colStart=0, colEnd=n-1;
        int num=1;
        
        while(rowStart<=rowEnd && colStart<=colEnd){
            // left to right
            for(int i=colStart; i<=colEnd; i++){
                matrix[rowStart][i]=num++;
            }
            rowStart++;
            
            // top to bottom
            for(int i=rowStart; i<=rowEnd; i++){
                matrix[i][colEnd]=num++;
            }
            colEnd--;
            
            // right to left
            for(int i=colEnd; i>=colStart; i--){
                if(rowStart<=rowEnd)
                    matrix[rowEnd][i]=num++;
            }
            rowEnd--;
            
            // bottom to top
            for(int i=rowEnd; i>=rowStart; i--){
                if(colStart<=colEnd)
                    matrix[i][colStart]=num++;
            }
            colStart++;
        }
        
        return matrix;
    }
};