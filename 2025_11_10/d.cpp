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
    int l;
    cin >> l;
    stack<int> st;
    set<int> cat;
    rep(i, l)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            if (cat.count(x))
            {
                cout << i + 1 << endl;
                return 0;
            }
            else
            {
                st.push(x);
                cat.insert(x);
            }
        }
        else
        {
            // if(st.empty())
            // {
            //     cout << i + 1 << endl;
            //     return 0;
            // }
            int y = st.top();
            if (x * -1 != y)
            {
                cout << i + 1 << endl;
                return 0;
            }
            else
            {
                st.pop();
                cat.erase(y);
            }
        }
    }
    cout << "OK" << endl;
}