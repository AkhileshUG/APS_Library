#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int N;
    cin>>N;
    for(int n = 1;n<=N;n++)
    {
        long int b = ((n*n)- 3*n + 4)/2;
        long int a = (n - 1)*(n + 4)* b;
        cout << a << endl;  
    }
    
    return 0;
}
