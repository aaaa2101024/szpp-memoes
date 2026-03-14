#include<bits/stdc++.h>
using namespace std;

int main()
{
    long a,k;
    cin >> a >> k;
    int day = 0;
    while(a < 2000000000000)
    {
        day++;
        a += 1 + k * a;
    }
    cout << day << endl;
}