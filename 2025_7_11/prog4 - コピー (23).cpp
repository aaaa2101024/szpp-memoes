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
    vl b(n + 1,0);
    vl c(n + 1,0);
    rep(i,n)
    {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        b[i] = max(b[i - 1],a[i - 1]);
    }
    for(int i = n ;i >= 1;i--)
    {
        c[n - i + 1] = max(c[n - i],a[i - 1]);
    }
    for(int i = 1;i < n + 1;i++)
    {
        cout << max(b[i - 1],c[n - i]) << endl;;
    }
}