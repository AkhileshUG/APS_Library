#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
//         int N = (m-1) + (n-1);
//         int R = min(m,n) - 1;
        
//         //compute NCR... combinations
//         // nCr = (n-1 C r-1) + (n-1 C r)
        
//         int arr[N+1][R+1];
        
//         for(int i=0; i<=N; i++){
//             for(int j=0; j<=min(i, R); j++){
//                 if(i==j || j==0){
//                     arr[i][j] = 1;
//                 }else{
//                     arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//                 }
//             }
//         }
        
//         return arr[N][R];
        
        
        int memo[101][101];
        memset(memo,0,m*n);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0){
                    memo[i][j]=1;
                }else{
                    memo[i][j]=memo[i-1][j]+memo[i][j-1];
                }
            }
        }
        
        return memo[m-1][n-1];
    }
};