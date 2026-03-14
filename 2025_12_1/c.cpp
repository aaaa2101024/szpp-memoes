#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> card;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        card.insert(a);
    }

    bool f = false;
    int a, b, c;
    a = -100;
    b = -50;
    c = -10;
    for (int i = 1; i < 300000;i++)
    {
        if(card.count(i) && card.count(i + 3) && card.count(i + 6))
            f = true;
    }
        if (f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
}