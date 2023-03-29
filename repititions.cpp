#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    string seq;
    cin>>seq;

    int ans = 1;
    int temp = 1;
    for (int i = 1; i < seq.size(); i++)
    {
        if (seq[i] == seq[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    cout << ans;
    return 0;
}
