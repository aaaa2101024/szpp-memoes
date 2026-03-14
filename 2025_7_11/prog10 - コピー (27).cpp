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
    ll n ,w;
    cin >> n >> w;
    vl imosu(200001,0);
    for(int i = 0;i < n;i++)
    {
        ll s,t,p;
        cin >> s >> t >> p;
        imosu[s] += p;
        imosu[t] -= p;
    }
    for(int i = 1;i < 200001;i++)
    {
        imosu[i] += imosu[i - 1];
    }
    for(int i = 0;i < 200001;i++)
    {
        if(imosu[i] > w)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}