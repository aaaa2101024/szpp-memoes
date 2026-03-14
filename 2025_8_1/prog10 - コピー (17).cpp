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
    vector<pll> cv(n);
    ll M = 0;
    rep(i, n)
    {
        cin >> cv[i].first >> cv[i].second;
    }
    for (int i = 0; i < (1 << n); i++)
    {
        ll cost = 0;
        ll temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cost += cv[j].first;
                temp += cv[j].second;
            }
        }
        if (cost <= m)
        {
            M = max(M, temp);
        }
    }
    cout << M << endl;
}