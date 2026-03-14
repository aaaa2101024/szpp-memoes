#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    vector<vector<int>> ans(h, vector<int>(w));
    sort(a.begin(),a.end(),greater<>());
    bool flag = true;
    int count = 0;
    int loc = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < a[i].first;j++)
        {
            if(flag)
            {
                ans[loc][count] = a[i].second;
                count++;
                if(count == w)
                {
                    flag = false;
                    count--;
                    loc++;
                }
            }
            else
            {
                ans[loc][count] = a[i].second;
                count--;
                if(count == -1)
                {
                    flag = true;
                    count++;
                    loc++;
                }
            }
        }
    }
    for(int i = 0;i < h;i++)
    {
        for(int j = 0;j < w;j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
}