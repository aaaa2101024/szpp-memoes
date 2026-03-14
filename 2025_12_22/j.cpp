#include <bits/stdc++.h>

void sort(int v[], int n)
{
    int i, j;
    for (int i = 0; i < n; i++){
        for (int j = i - 1; j >= 0 && v[j] > v[j + 1]; j--){
            swap(v, j);
        }
    }
}