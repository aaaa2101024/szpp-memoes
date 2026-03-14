#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int ans = 0;
    for(int i = 0;i < n;i++) cin >> p[i];
    for(int i = 0;i < n - 2;i++)
    {
        vector<int> check = {p[i],p[i + 1],p[i + 2]};
        vector<int> check1 = {p[i],p[i + 1],p[i + 2]};
        sort(check.begin(),check.end());
        if(check[1] == check1[1])
            ans++;
    }
    cout << ans << endl;
}