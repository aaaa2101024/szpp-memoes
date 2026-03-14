#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++)
            cin >> s[i][j];
    }

    bool f = false;
    for (int i = 0; i < n; i++)
    {
        bool ans = true;
        for (int j = 0; j < n; j++)
        {
            if(s[i][j] == 'x')
                ans = false;
        }
        if(ans)
            f = true;
    }

    for (int j = 0; j < n;j++)
    {
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i][j] == 'x')
                ans = false;
        }
        if (ans)
            f = true;
    }

    for (int i = 0; i < n; i++)
    {
        bool ans = true;
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 'o')
                ans = false;
        }
        if (ans)
            f = true;
    }

    for (int j = 0; j < n; j++)
    {
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i][j] == 'o')
                ans = false;
        }
        if (ans)
            f = true;
    }
        if (f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
}