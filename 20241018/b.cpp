#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    string ans = "";
    bool flag = false;
    for(int i = 0;i < n - 1;i++)
    {
        if(s[i] == 'n' && s[i + 1] == 'a')
        {
            ans += "nya";
            i++;
            if(i == n - 1)
                flag = true;
        }
        else
        {
            ans += s[i];
        }
    }
    if(!flag)
        ans += s[n - 1];
    cout << ans << endl;
}