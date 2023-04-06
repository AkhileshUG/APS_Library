#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        
//         int zero=0, two=nums.size()-1;
        
//         for(int i=0; i<=two; i++){
//             while(nums[i]==2 && i<two){
//                 swap(nums[i], nums[two]);
//                 two--;
//             }
//             while(nums[i]==0 && i>zero){
//                 swap(nums[i], nums[zero]);
//                 zero++;
//             }
//         }
        
        int low=0, mid=0, high=nums.size()-1;
        
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};