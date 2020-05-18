#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k=0, x;
    cin>>n;
    cin>>m;
    int a[n][m];
    int b[m];
    int c[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i][0];
        x=a[i][0];
        for (int j=1; j<m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]<x)
            {
                x=a[i][j];
            }
        }
        c[i]=x;
    }
    for (int i=0; i<m; i++)
    {
        x=a[0][i];
        for (int j=0; j<n; j++)
        {
            if (a[j][i]>x)
            {
                x=a[j][i];
            }
        }
        b[i]=x;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if ((a[i][j]==c[i])&&(a[i][j]==b[j]))
            {
                k++;
            }
        }
    }
    cout<<k<<"\n";
    return 0;
}