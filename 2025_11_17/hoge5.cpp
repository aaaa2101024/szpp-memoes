#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> hole_l(0), hole_r(0);
    set<int> dog;
    for (int i = 1; i <= n; i++)
    {
        char t;
        int d;
        cin >> t >> d;
        if (d > 0)
        {
            if (dog.count(d))
            {
                cout << i << endl;
                return 0;
            }
            dog.insert(d);
            if (t == 'L')
            {
                hole_l.push_back(d);
            }
            else
            {
                hole_r.push_back(d);
            }
        }
        else
        {
            if (hole_l.empty() && hole_r.empty())
            {
                cout << i << endl;
                return 0;
            }
            if (t == 'L')
            {
                if (hole_l.empty())
                {
                    if (hole_r.front() == -1 * d)
                    {
                        hole_r.pop_front();
                        dog.erase(-1 * d);
                    }
                    else
                    {
                        cout << i << endl;
                        return 0;
                    }
                }
                else if (hole_l.back() == -1 * d)
                {
                    hole_l.pop_back();
                    dog.erase(-1 * d);
                }
                else
                {
                    cout << i << endl;
                    return 0;
                }
            }
            else
            {
                if (hole_r.empty())
                {
                    if (hole_l.front() == -1 * d)
                    {
                        hole_l.pop_front();
                        dog.erase(-1 * d);
                    }
                    else
                    {
                        cout << i << endl;
                        return 0;
                    }
                }
                else if (hole_r.back() == -1 * d)
                {
                    hole_r.pop_back();
                    dog.erase(-1 * d);
                }
                else
                {
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }
    cout << "OK" << endl;
}