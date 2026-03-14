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
    int hp, t, h, n;
    cin >> hp >> t >> h >> n;
    vl a(n);
    rep(i, n) cin >> a[i];
    bool f = false;
    for (int i = 0; i < (1 << n); i++)
    {
        ll temp_h = hp;
        bool f2 = false;
        for (int j = 0, tt = 0; j < n && tt < t; j++)
        {
            if (i & (1 << j))
            {
                temp_h -= a[j];
                tt++;
            }
            if (temp_h <= 0)
            {
                f2 = true;
                break;
            }
        }
        if (h + temp_h > 0 && f2)
        {
            f = true;
        }
    }
    if (f)
    {
        cout << "gigigi..." << endl;
    }
    else
    {
        cout << "gagagagaga" << endl;
    }
}