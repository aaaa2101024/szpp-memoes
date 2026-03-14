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
    int n;
    cin >> n;
    vl a(n);
    rep(i, n) cin >> a[i];
    vl b(n + 1);
    b[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        b[i] = b[i - 1] + a[i - 1];
    }
    for(int i = 0;i < n;i++)
    {
        ll ans = 0;
        for(int j = i + 1;j <= n;j++)
        {
            ans = max(ans, b[j] - b[j - i - 1]);
        }
        cout << ans << endl;
    }
}