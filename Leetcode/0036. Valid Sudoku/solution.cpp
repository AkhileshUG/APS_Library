#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int existInRow[9][9]={0}, existInCol[9][9]={0}, existInBox[9][9]={0};
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '0' -1;
                    int k = ((i/3) * 3) + (j/3);
                    
                    if(existInRow[i][num] || existInCol[j][num] || existInBox[k][num]){
                        return false;
                    }
                    
                    existInRow[i][num] = existInCol[j][num] = existInBox[k][num] = 1;
                }
            }
        }
        
        return true;
    }
};