#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w,n;
    cin >> h >> w >> n;
    int count = 0;
    int ed = 0;
    while(ed < n)
    {
        ed += max(h,w);
        count++;
    }
    cout << count << endl;
}