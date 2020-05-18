#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mas[n+1];
    for(int i =1; i<=n;i++)
    {
        cin>>mas[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n+1; j++)
        {
            if (mas[i] > mas[j])
            {
                int t;
                t = mas[i];
                mas[i] = mas[j];
                mas[j] = t;
            }
        }
    }
    cout<<mas[1]<<" "<<mas[2];
    return 0;
}