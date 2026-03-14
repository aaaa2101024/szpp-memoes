#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, d;
    cin >> n >> d;
    vector<pair<int, int>> xy(n);
    for (int i = 0; i < n; i++)
    {
        cin >> xy[i].first >> xy[i].second;
    }
    int ans = 0;
    for(int i = 0;i < n;i++)
    {
        long xx = xy[i].first;
        long yy = xy[i].second;
        double check = sqrt(xx * xx + yy * yy);
        if(check <= d)
        {
            ans++;
        }
    }
    cout << ans << endl;
}