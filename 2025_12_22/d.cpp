#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            ans += a[i] / 2;
        else
            ans += a[i];
    }
    cout << ans << endl;
}