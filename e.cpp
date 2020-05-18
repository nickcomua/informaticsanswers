#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    int j=a[0];
    for(int i=0; i<n-1; i++)
    {
        j=max(j,a[i+1]);
    }
    cout<<j;
    return 0;
}