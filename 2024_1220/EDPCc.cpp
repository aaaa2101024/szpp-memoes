#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<long>> dp(n,vector<long>(3,0));
    vector<vector<long>> abc(n,vector<long>(3,0));
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cin >> abc[i][j];
        }
    }
    dp[0][0] = abc[0][0];
    dp[0][1] = abc[0][1];
    dp[0][2] = abc[0][2];
    for(int i = 1;i < n;i++)
    {
        dp[i][0] = abc[i][0] + max(dp[i - 1][1],dp[i - 1][2]);
        dp[i][1] = abc[i][1] + max(dp[i - 1][0],dp[i - 1][2]);
        dp[i][2] = abc[i][2] + max(dp[i - 1][0],dp[i - 1][1]);
    }
    long ans = 0;
    for(int i = 0;i < 3;i++)
    {
        ans = max(ans,dp[n - 1][i]);
    }
    cout << ans << endl;
}