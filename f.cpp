#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    int j=a[0];
    int k=0;
    for(int i=0; i<n; i++)
    {
        if (a[i] > j)
        {
            j = a[i];
            k = i;
        }
    }
    cout<<k+1;
    return 0;
}