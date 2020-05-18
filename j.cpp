#include <iostream>

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
            if (mas[i] < mas[j])
            {
                int t;
                t = mas[i];
                mas[i] = mas[j];
                mas[j] = t;
            }
        }
    }
    int k=mas[1];
    int m;
    for(int i=1; i<=n;i++)
    {
        if(mas[i]>mas[i+1])
        {
            cout<<mas[i+1];
            break;
        }
        else
        {
            continue;
        }
        return 0;
    }
}