#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> cas(n);
    for (auto &x : cas)
    {
        cin >> x;
    }
    for (int i = 0; i < n; i++)
    {
        if (cas[i] % 2 == 1)
        {
            cout << "Odd" << endl;
        }
        else
        {
            double temp = sqrt(cas[i]);
            if(temp == round(temp))
            {
                cout << "Even" << endl;
            }
            else
            {
                cas[i] /= 2;
                if(cas[i] % 2 == 1)
                {
                    cout << "same" << endl;
                }
                cout << "Even" << endl;
            }
        }
    }
}