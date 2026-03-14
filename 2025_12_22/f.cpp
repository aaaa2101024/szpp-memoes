#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> ch;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        ch.insert(s[i]);
    }
    if (ch.size() != n)
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i][s[i].size() - 1] != s[i + 1][0])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}