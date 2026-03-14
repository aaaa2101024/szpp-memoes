#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long hoe = 0;
    vector<pair<long, string>> sa(n);
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        cin >> sa[i].second >> sa[i].first;
        if (sa[i].second == "gousuper")
        {
            f = true;
            hoe = sa[i].first;
        }
    }
    if (!f)
    {
        sort(sa.begin(), sa.end(), greater<>());
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ' ' << sa[i].second << endl;
        }
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (hoe < sa[i].first)
            sum++;
    }
    if (sum >= n / 2 + 1)
    {
        sort(sa.begin(), sa.end());
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ' ' << sa[i].second << endl;
        }
    }
    else
    {
        sort(sa.begin(), sa.end(), greater<>());
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ' ' << sa[i].second << endl;
        }
    }
}
