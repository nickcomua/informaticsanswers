#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, pr, pl;
    cin>>n;
    cin>>k;
    int a[n];
    int b[k];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<k; i++)
    {
        cin>>b[i];
    }
    pl=0;
    pr=n-1;
    for (int i=0; i<k; i++)
    {
        while(true)
        {
            if(a[(pl+pr)/2]-b[i]<0)
            {
                pl=(pl+pr)/2;
            }
            else
            {
                pr=(pl+pr)/2;
            }
            if (pr-pl<=1)
            {
                break;
            }
        }
        if (abs(a[pr]-b[i])<abs(a[pl]-b[i]))
        {
            cout<<a[pr]<<"\n";
        }
        else
        {
            cout<<a[pl]<<"\n";
        }
        pl=0;
        pr=n-1;
    }
    return 0;
}