#include <bits/stdc++.h>
using namespace std;

int main()
{
    long s;
    cin >> s;
    int cnt = 1;
    set<long> ch;
    while (1 == 1)
    {
        if (cnt == 1)
        {
            s = s;
            ch.insert(s);
        }
        else if (s % 2 == 0)
        {
            s = s / 2;
            if (ch.count(s))
            {
                cout << cnt << endl;
                return 0;
            }
            else
            {
                ch.insert(s);
            }
        }
        else
        {
            s = 3 * s + 1;
            if (ch.count(s))
            {
                cout << cnt << endl;
                return 0;
            }
            else
            {
                ch.insert(s);
            }
        }
        cnt++;
    }
}