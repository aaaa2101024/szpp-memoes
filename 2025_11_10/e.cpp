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
    string s;
    cin >> s;
    s[x - 1] = '@';
    for (int i = x - 2; i >= 0; i--)
    {
        if (s[i] == '.')
            s[i] = '@';
        else
            break;
    }
    for (int i = x; i < n; i++)
    {
        if (s[i] == '.')
            s[i] = '@';
        else
            break;
    }
    cout << s << endl;
}