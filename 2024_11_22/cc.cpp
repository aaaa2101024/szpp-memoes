#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> abcd(4);
    for(int i = 0;i < 4;i++)
    {
        cin >> abcd[i].first >> abcd[i].second;
    }
    string ans = "Yes";
    vector<float> len(4);
    vector<float> tr(2);
    for(int i = 0;i < 4;i++)
    {
        float x = abcd[i % 4].first - abcd[(i + 1) % 4].first;
        float y = abcd[i % 4].second - abcd[(i + 1) % 4].second;
        len[i] = sqrt(x * x + y * y);
    }
    float acx = abcd[0].first - abcd[2].first;
    float acy = abcd[0].second - abcd[2].second;
    float bdx = abcd[1].first - abcd[3].first;
    float bdy = abcd[1].second - abcd[3].second;
    tr[0] = (acx * acx + acy * acy);
    tr[1] = (bdx * bdx + bdy * bdy);
    vector<float> check(4);
    check[0] = (len[0] * len[0] + len[1] * len[1] - tr[0]);
    check[1] = (len[1] * len[1] + len[2] * len[2] - tr[1]);
    check[2] = (len[2] * len[2] + len[3] * len[3] - tr[0]);
    check[3] = (len[0] * len[0] + len[3] * len[3] - tr[1]);
    for(int i = 0;i < 4;i++)
    {
        if(check[i] < 0)
         {
            ans = "No";
         }
    }
    cout << ans << endl;
}