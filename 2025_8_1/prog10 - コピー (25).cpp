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
    set<int> div;
    div.insert(1);
    for (int i = 2; i <= 100; i++)
    {
        if (100 % i == 0)
        {
            div.insert(i);
        }
    }
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (div.count(i))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}