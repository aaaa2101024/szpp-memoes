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
    ll n, m;
    cin >> n >> m;
    vl a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    ll ans = 0;
    ll l = 0,r = 0;
    for(;r < n;l++)
    {
        ll x = a[l];
        while(r < n && a[r] - x < m)
        {
            r++;
        }
        ans = max(ans, r - l);
    }
    cout << ans << endl;
}