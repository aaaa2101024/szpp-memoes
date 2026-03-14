#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> student;
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        string s;
        cin >> x >> s;
        if(x == 1)
        {
            int y;
            cin >> y;
            student[s] = y;
        }
        else
        {
            cout << student[s] << endl;
        }
    }
}