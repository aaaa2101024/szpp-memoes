#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    bool flag = true;
    long count = 1;
    for (long i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "OR")
        {
            if (flag)
            {
                count += 1l << i + 1;
                flag = false;
            }
            else
            {
                count += 1l << i + 1;
            }
        }
    }
    cout << count << endl;
}