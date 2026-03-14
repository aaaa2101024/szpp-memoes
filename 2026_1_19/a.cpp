#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n, vector<int>(0));
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": {";
        for (int j = 0; j < G[i].size(); j++)
        {
            if (G[i].size() == j + 1)
                cout << G[i][j] + 1;
            else
                cout << G[i][j] + 1 << ", ";
        }
        cout << '}' << endl;
    }
}