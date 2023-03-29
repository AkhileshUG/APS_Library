#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t = 0;
    
    while(n>=5)
    {
        n = n / 5;
        t = t + n;
    }
    cout << t;
    return 0;
}
