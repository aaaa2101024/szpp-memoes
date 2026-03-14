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
    int n, x;
    cin >> n >> x;
    vl a(n);
    rep(i, n) cin >> a[i];
    int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
    cout << pos + 1 << endl; // +1 for 1-based index
}