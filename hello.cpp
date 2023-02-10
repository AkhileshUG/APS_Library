
#include <iostream>
using namespace std;

int LCS(int len1, int len2, string s1, string s2)
{
    int LCS[len1+1][len2+1];

    for(int i=0;i<len1;i++)
    {
        LCS[i][0] = 0;
    }

    for(int j=0;j<len2;j++)
    {
        LCS[0][j] = 0;
    }

    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                LCS[i][j] = LCS[i-1][j-1] + 1;
            }
            else
            {
                LCS[i][j] = max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }
    return LCS[len1][len2];
}

int main()
{
    string s1;
    string s2;
    cout<<"Enter string 1 : ";
    cin>>s1;

    cout<<"Enter string 2 : ";
    cin>>s2;

    int len1 = s1.size(), len2 = s2.size();

    int res = LCS(len1,len2,s1,s2);

    cout<<"Length of longest common substring : "<<res;

    return 0;
}