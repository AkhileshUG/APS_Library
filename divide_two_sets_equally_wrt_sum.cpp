#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void display(vector<long long int> a)
{
    for (long long int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    long long int n;
    cin >> n;
    long long int sum = (n * (n + 1)) / 2;
    vector<long long int> a, b;
    long long int ca = 0, cb = 0, f = 0;

    if (sum % 2 != 0)
    {
        cout << "NO";
    }

    else
    {
        f = 1;
        long long int tar = sum / 2;

        for (long long int i = n; i >= 1; i--)
        {
            if (i <= tar)
            {
                a.push_back(i);
                ca++;
                tar -= i;
            }

            else
            {
                b.push_back(i);
                cb++;
                // tar -= i;
            }
        }

        if (f == 1)
        {
            cout << "YES" << endl;
            cout << ca << endl;
            display(a);
            cout << cb << endl;
            display(b);
        }
    }
    return 0;
}
