#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k=0;
    cin>>n;
    for (int i=1; i<n; i*=2)
    {
        k++;
    }
    cout<<k<<"\n";
    return 0;
}