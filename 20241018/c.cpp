#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(2, vector<int>(n));
    int ans = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int check = 0;
        int loc = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                check += a[loc][j];
                loc = 1;
            }
            check += a[loc][j];
        }
        ans = max(check, ans);
    }
    cout << ans << endl;
}