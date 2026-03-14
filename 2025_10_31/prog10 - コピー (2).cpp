#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr int INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

int main()
{
    int n, lll;
    cin >> n >> lll;
    int k;
    cin >> k;
    vl a(n + 1);
    rep(i, n)
    {
        cin >> a[i];
    }
    a[n] = lll;
    long l = 1, r = lll;
    while (r - l > 1)
    {
        ll mid = (r + l) / 2;
        int cnt = 0;
        int last_youkann = 0;
        for (int i = 0; i < n + 1; i++)
        {
            if (a[i] - last_youkann >= mid)
            {
                last_youkann = a[i];
                cnt++;
            }
        }
        if (cnt <= k)
            r = mid;
        else
            l = mid;
    }
    cout << l << endl;
}