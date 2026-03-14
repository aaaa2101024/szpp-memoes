#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,m;
    cin >> n >> m;
    vector<long> a(m);
    for(long i = 0;i < m;i++)
    {
        cin >> a[i];
    }
    vector<string> res(n);
    for(long i = 0;i < n;i++)
    {
        cin >> res[i];
    }
    vector<long> point(n,0);
    long mm = 0;
    for(long i = 0;i < n;i++)
    {
        for(long j = 0;j < m;j++)
        {
            if(res[i][j] == 'o')
            {
                point[i] += a[j];
            }
        }
        point[i] += i + 1;
        mm = max(mm,point[i]);
    }
    for(int i = 0;i < n;i++)
    {
        if(mm == point[i])
        {
            cout << 0 << endl;
        }
        else
        {
            vector<long> no(0);
            for(int j = 0;j < m;j++)
            {
                if(res[i][j] == 'x')
                {
                    no.emplace_back(a[j]);
                }
            }
            sort(no.begin(),no.end(),greater<>());
            int count = 0;
            for(int j = 0;j < int(no.size());j++)
            {
                count++;
                point[i] += no[j];
                if(point[i] > mm)
                {
                    cout << count << endl;
                    break;
                }
            }
        }
    }
}