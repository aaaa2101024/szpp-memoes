#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> X(n), Y(m);
    for (int i = 0; i < n; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> Y[i];
    }
    if (x > y)
    {
        cout << "War" << endl;
        return 0;
    }
    for (int i = x + 1; i <= y; i++)
    {
        bool f = true;
        for (int j = 0; j < n; j++)
        {
            if (X[j] >= i)
                f = false;
        }
        for (int j = 0; j < m; j++)
        {
            if (Y[j] < i)
                f = false;
        }
        if (f)
        {
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
}