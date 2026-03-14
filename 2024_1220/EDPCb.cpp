#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,k;
    cin >> n >> k;
    vector<long> h(n);
    for(int i = 0;i < n;i++)
    {
        cin >> h[i];
    }
    vector<long> dp(n,(1l << 60));
    dp[0] = 0;
    dp[1] = abs(h[0] - h[1]);
    for(int i = 2;i < n;i++)
    {
        for(int j = 1;j <= k && i - j >= 0;j++)
        {
            dp[i] = min(dp[i],abs(h[i] - h[i - j]) + dp[i - j]);
        }
    }
    cout << dp[n - 1] << endl;
}