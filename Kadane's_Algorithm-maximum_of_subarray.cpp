#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int kadane(vector<int> &a)
{
    int sum = 0;
    int maxi_sum = INT_MIN;
    for(auto it : a)
    {
        sum = sum + it;
        maxi_sum = max(maxi_sum,sum);
        if(sum<0){
            sum = 0;
        }
    }
    return sum;
}

int main()
{
    int max_sum;
    int n,c;
    cout<<"Enter no of elements in the array: ";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>c;
        a.push_back(c);
    }

    max_sum = kadane(a);

    cout<<"Maximum subarray sum: "<<max_sum;
}