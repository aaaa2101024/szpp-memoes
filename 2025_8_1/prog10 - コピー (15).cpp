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
    cin.tie(0), ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vl a(n);
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;
    vl v(q);
    rep(i,q) cin >> v[i];
    rep(i,q)
    {
        cout << upper_bound(all(a), v[i]) - lower_bound(all(a),v[i]) << '\n'; // 1-based index
    }
}