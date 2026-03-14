#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double ans = 1.0;
    if (d <= a)
        ans = 1.0;
    else if (d <= b)
    {
        ans = c / (b - a);}
    else
        ans = 0;
    printf("%1.6lf\n", ans);
}