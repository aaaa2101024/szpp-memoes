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
    vl a(n+2);
    a[0] = 0;
    a[n + 1] = 0;
    for(int i = 1;i < n + 1;i++) cin >> a[i];
    int sum = 0;
    for (int i = 0; i < n + 1; i++)
    {
        sum += abs(a[i] - a[i + 1]);
    }
    for(int i = 1;i < n + 1;i++)
    {
        if(a[i - 1] < a[i] && a[i] < a[i + 1])
        {
            cout << sum << endl;
        }
        else if(a[i - 1] < a[i + 1] && a[i + 1] < a[i])
        {
            cout << sum - abs(a[i] - a[i + 1]) * 2<< endl;
        }
        else if(a[i] < a[i - 1] && a[i - 1] < a[i + 1])
        {
            cout << sum - abs(a[i - 1] - a[i]) * 2<< endl;
        }
        else if(a[i] < a[i + 1] && a[i + 1] < a[i - 1])
        {
            cout << sum - abs(a[i + 1] - a[i]) * 2<< endl;
        }
        else if(a[i + 1] < a[i - 1] && a[i - 1] < a[i])
        {
            cout << sum - abs(a[i] - a[i - 1]) * 2<< endl;
        }
        else if(a[i - 1] == a[i + 1])
        {
            cout << sum - abs(a[i] - a[i + 1]) * 2 << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
}