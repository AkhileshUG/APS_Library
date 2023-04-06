#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, int i, int j, string word){
        if(!word.length()){
            return true;
        }
        
        if(i<0 || i>=board.size() || j<0 || j>=board[i].size() || board[i][j] != word[0]){
            return false;
        }
        
        char c = board[i][j];
        board[i][j] = '*';
        
        string str = word.substr(1);
        
        bool ans = exist(board, i-1, j, str) //up
            || exist(board, i+1, j, str) //down
            || exist(board, i, j-1, str) //left
            || exist(board, i, j+1, str); //right
        
        board[i][j] = c;
        
        return ans;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty()){
            return false;
        }
        
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(exist(board, i, j, word))
                    return true;
            }   
        }
        
        return false;
    }
};