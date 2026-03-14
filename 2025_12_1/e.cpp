#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n), sum(n + 1, 0);
    int ans = 0;
    sum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (y[i] == 0)
        {
            ans++;
            sum[i + 1] = ans;
        }
        else if(y[i] == x[i] + 1)
        {
            sum[i + 1] = ans;
        }
        else
        {
            if(y[i] <= sum[i] - sum[i - x[i]])
            {
                ans++;
            }
            sum[i + 1] = ans;
        }
    }
    cout << ans << endl;
}