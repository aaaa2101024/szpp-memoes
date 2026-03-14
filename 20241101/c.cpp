#include <bits/stdc++.h>
using namespace std;

int main()
{
    long k;
    cin >> k;
    long ans = 0;
    for (long i = 1; i <= k; i++)
    {
        for (long j = 1; j <= k; j++)
        {
            for (long a = 1;a <= k;a++)
            {
                ans += __gcd(i,__gcd(j,a));
            }
        }
    }
    cout << ans << endl;
}