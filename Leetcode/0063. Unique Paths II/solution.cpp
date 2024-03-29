#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int memo[101][101];
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        memset(memo,0,m*n);
        
        if(obstacleGrid[m-1][n-1] || obstacleGrid[0][0]){
            return 0;
        }
        
        obstacleGrid[0][0] = 1;
        
        for(int i=1;i<m;i++){
            obstacleGrid[i][0]=(!obstacleGrid[i][0]&&obstacleGrid[i-1][0])?1:0;
        }
        
        for(int j=1;j<n;j++){
            obstacleGrid[0][j]=(!obstacleGrid[0][j]&&obstacleGrid[0][j-1])?1:0;
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(!obstacleGrid[i][j]){
                    obstacleGrid[i][j]=obstacleGrid[i-1][j]+obstacleGrid[i][j-1];
                }else{
                    obstacleGrid[i][j]=0;
                }
            }
        }
        
        return obstacleGrid[m-1][n-1];
    }
};