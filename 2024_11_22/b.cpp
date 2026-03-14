#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string mi = "";
    string M = "";
    for(int i = 0;i < n;i++)
    {
        mi += 'z';
        M += 'a';
    }
    for(int i = 0;i < n;i++)
    {
        s = s.substr(1,n - 1) + s[0];
        if(mi > s)
        {
            mi = s;
        }
        else if(s > M)
        {
            M = s;
        }
    }
    cout << mi << endl;
    cout << M << endl;
}