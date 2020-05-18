#include <iostream>

using namespace std;

int main()
{
    int n,x;
    int a[n+1];
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
            j++;
    }
    if(j==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}