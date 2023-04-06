#include<bits/stdc++.h>
using namespace std;

/** Logic:
 * move around boundaries(first and last column, first and last row)
 * if 'O' is found then flip it to a temporary char '#'
 * now all the mid 'O' are surrounded by 'X' four directionally!
 * so first flip all these 'O' to 'X'
 * next flip back all temporary '#' to 'O'
 */

class Solution {
public:
    void surround(vector<vector<char>>& board, int i, int j){
        if(i<0 || i>=board.size() || j<0 || j>=board[i].size() || board[i][j] != 'O'){
            return;
        }
        
        board[i][j]='#';
        
        surround(board, i-1, j); //up
        surround(board, i+1, j); //down
        surround(board, i, j-1); //left
        surround(board, i, j+1); //right
    }
    
    void solve(vector<vector<char>>& board) {
        if(board.empty()){
            return;
        }
        
        int m = board.size(), n = board[0].size();
        
        //move over first and last column!
        for(int i=0; i<m; i++){
            if(board[i][0] == 'O'){
                surround(board, i, 0);
            }
            if(board[i][n-1] == 'O'){
                surround(board, i, n-1);
            }
        }
        
        //move over first and last row!
        for(int i=0; i<n; i++){
            if(board[0][i] == 'O'){
                surround(board, 0, i);
            }
            if(board[m-1][i] == 'O'){
                surround(board, m-1, i);
            }
        }
        
        //flip all O to X
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }   
        }
        
        //flip all # to O
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == '#'){
                    board[i][j] = 'O';
                }
            }   
        }
    }
};