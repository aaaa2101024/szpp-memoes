#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> cnt;
    while (n--)
    {
        int a;
        cin >> a;
        cnt[a]++;
    }
    int Max = 0;
    for (auto x : cnt)
    {
        Max = max(Max, x.second);
    }
    for (auto x : cnt)
    {
        if(Max == x.second)
        {
            cout << x.first << endl;
        }
    }
}