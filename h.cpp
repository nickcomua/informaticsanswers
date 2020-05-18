#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int n;
    cin>>x;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int j=0;
    int k=0;
    while(j<n)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i][j]==x)
            {
                k++;
            }
        }
        if(k>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        k=0;
        j++;
    }
    return 0;
}