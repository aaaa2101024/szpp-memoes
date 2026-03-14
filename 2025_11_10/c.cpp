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
    stack<string> st;
    rep(i, q)
    {
        string s;
        cin >> s;
        if(s == "READ")
        {
            cout << st.top() << endl;
            st.pop();
        }
        else
        {
            st.push(s);
        }
    }
}