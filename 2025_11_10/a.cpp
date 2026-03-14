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
    int q;
    cin >> q;
    stack<string> que;
    rep(i, q)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            string s;
            cin >> s;
            que.push(s);
        }
        else if(x == 2)
        {
            cout << que.top() << endl;
        } else
        {
            que.pop();
        }
    }
}