#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (long i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr long INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

int main()
{
    long n, k;
    cin >> n >> k;
    vl a(n);
    rep(i, n)
            cin >>
        a[i];
    long left = 0, right = INF;
    while (right - left > 1)
    {
        long mid = (left + right) / 2;
        long sum = 0;
        for (auto x : a)
        {
            sum += mid / x;
        }
        if (sum >= k)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    cout << right << endl;
}