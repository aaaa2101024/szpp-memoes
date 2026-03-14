#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<double,double>> loc(n);
    for(int i = 0;i < n;i++)
    {
        cin >> loc[i].first >> loc[i].second;
    }
    vector<int> vec(n);
    long kaiji = 1;
    for(int i = 0;i < n;i++)
    {
        vec[i] = i;
        kaiji *= (i + 1);
    }
    double ans = 0;
    do
    {
        for(int i = 0;i < n - 1;i++)
        {
            double x = loc[vec[i]].first - loc[vec[i + 1]].first;
            double y = loc[vec[i]].second - loc[vec[i + 1]].second;
            ans += sqrt(x * x + y * y);
        }
    } while (next_permutation(vec.begin(),vec.end()));
    ans /= kaiji;
    printf("%.10lf\n", ans);
}