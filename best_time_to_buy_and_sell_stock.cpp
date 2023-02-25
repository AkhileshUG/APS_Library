#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int pro = 0;

        for(int i=0;i<prices.size();i++)
        {
            buy  = min(buy,prices[i]);
            pro = max(pro,prices[i]-buy);
        }
        return pro;
    }

};

int main()
{
    int n;
    cout<<"enter no of stocks:";
    cin>>n;
    vector<int> stocks(n);
    for(int i=0;i<n;i++)
    {
        cin>>stocks[i];
    }

    Solution solution1;
    int ans = solution1.maxProfit(stocks);

    cout<<ans<<endl;

    return 0;

}
