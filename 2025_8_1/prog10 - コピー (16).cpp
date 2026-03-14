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
    ll n, k;
    int cnt = 0;
    cin >> n >> k;
    vector<vl> t(n, vl(n));
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> t[i][j];
        }
    }
    vl a(n - 1);
    rep(i, n - 1) a[i] = i + 1;
    do
    {
        ll sum = 0;
        sum += t[0][a[0]];
        rep(i, n - 2)
        {
            sum += t[a[i]][a[i + 1]];
        }
        sum += t[a[n - 2]][0];
        if (sum == k)
        {
            cnt++;
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << cnt << endl;
}