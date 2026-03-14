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
    int n,m;
    cin >> n >> m;
    vector<char> a(n);
    map<char,char> tr;
    rep(i,n)
    {
        cin >> a[i];
    }
    sort(all(a));
    for(int i = 1;i <= n;i++)
    {
        tr[i] = a[i - 1];
    }
    int q;
    cin >> q;
    string MAX = "";
    for(int i = 0;i < n;i++)
    {
        MAX += tr[n - 1];
    }
    for(int _ = 0;_ < q;_++)
    {
        ll x;
        cin >> x;
        string ch = MAX;

    }
}