#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    vector<long> h(n);
    for(long i = 0;i < n;i++)
    {
        cin >> h[i];
    }
    vector<long> dp(n,0);
    dp[1] = abs(h[0] - h[1]);
    for(int i = 2;i < n;i++)
    {
        dp[i] = min(abs(h[i] - h[i - 2]) + dp[i - 2],abs(h[i] - h[i - 1]) + dp[i - 1]);
    }
    cout << dp[n - 1] << endl;
}