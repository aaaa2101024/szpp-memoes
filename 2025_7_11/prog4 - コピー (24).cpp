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
    int d, n;
    cin >> d >> n;
    vl imosu(d + 1);
    rep(i, n)
    {
        int l, r;
        cin >> l >> r;
        l--;
        imosu[l]++;
        imosu[r]--;
    }
    for (int i = 1; i <= d; i++)
    {
        imosu[i] += imosu[i - 1];
    }
    for (int i = 0; i < d; i++)
    {
        cout << imosu[i] << endl;
    }
}