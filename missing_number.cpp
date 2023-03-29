#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int t[n - 1];
    for (long long int i = 0; i < n - 1; i++)
    {
        cin >> t[i];
    }

    long long int sum = (n * (n + 1)) / 2;

    for (long long int j = 0; j < n - 1; j++)
    {
        sum = sum - t[j];
    }

    cout << sum;
    return 0;
}
