#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n, vector<int>(0));
    for (int i = 0; i < m;i++)
    {
        int a,b;
        cin >> a>> b;
        a--;
        b--;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
    }
    int ans = 0;
    int M = 0;
    for(int i = 0;i < n;i++)
    {
        if(M < G[i].size())
        {
            M = G[i].size();
            ans = i;
        }
    }
    cout << ans + 1 << endl;
}