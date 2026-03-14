#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    set<int> card;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            card.insert(y);
        }
        else if (x == 2)
        {
            card.erase(y);
        }
        else
        {
            auto temp = card.lower_bound(y);
            if (temp != card.end())
                cout << *temp << endl;
            else
                cout << -1 << endl;
        }
    }
}