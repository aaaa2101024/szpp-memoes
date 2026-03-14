#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> abcd(4);
    pair<double,double> mid = {0,0};
    pair<int,int> mi = {101,101},M = {-101,-101};
    for(int i = 0;i < 4;i++)
    {
        cin >> abcd[i].first >> abcd[i].second;
        mid.first += abcd[i].first;
        mid.second += abcd[i].second;
        mi.first = min(mi.first,abcd[i].first);
        mi.second = min(mi.second,abcd[i].second);
        M.first = max(M.first,abcd[i].first);
        M.second = max(M.second,abcd[i].second);
    }
    mid.first /= 4;
    mid.second /= 4;
    if(mi.first < mid.first && mid.first < M.first && mi.second < mid.second && mid.second < M.second)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}