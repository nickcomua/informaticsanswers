#include <iostream>

using namespace std;

main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=a[0];
    int y=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            x=a[i];
        }
        if(a[i]<y)
        {
            y=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            a[i]=y;
        }
        cout<<a[i]<<' ';
    }
}