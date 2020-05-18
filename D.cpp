#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, pr, pl;
    cin>>n;
    cin>>m;
    long long int a[n];
    long long int b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    pl=0;
    pr=n-1;
    for (int i=0; i<m; i++)
    {
        if((b[i]<a[0])||(b[i]>a[n-1]))
        {
            cout<<"0"<<"\n";
        }
        else
        {
            while(true)
            {
                if(a[(pl+pr)/2]<b[i])
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
            if((a[pl]!=b[i])&&(a[pr]!=b[i]))
            {
                cout<<"0"<<"\n";
                pl=0;
                pr=n-1;
            }
            else
            {
                if(a[pl]==b[i])
                {
                    cout<<pl+1<<" ";
                }
                else
                {
                    cout<<pr+1<<" ";
                }
                pl=0;
                pr=n-1;
                while(true)
                {
                    if(a[(pl+pr)/2]>b[i])
                    {
                        pr=(pl+pr)/2;
                    }
                    else
                    {
                        pl=(pl+pr)/2;
                    }
                    if(pr-pl<=1)
                    {
                        break;
                    }
                }
                if (a[pr]==b[i])
                {
                    cout<<pr+1<<"\n";
                }
                else
                {
                    cout<<pl+1<<"\n";
                }
                pl=0;
                pr=n-1;
            }
        }
    }
    return 0;
}