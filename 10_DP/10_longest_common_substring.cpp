#include <bits/stdc++.h>
using namespace std;
int longestCommonSubstr(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
                dp[i][j] = 0;
        }
    }

    int maxi = INT_MIN;
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            maxi = max(maxi, dp[i][j]);
        }
    }
    return maxi;
}
int main()
{
    return 0;
}