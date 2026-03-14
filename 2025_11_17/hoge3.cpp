#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    set<int> a;
    while (n--)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << endl;
}