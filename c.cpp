#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    int index, a;
    cin >> n;
    int mas[101];
    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }
    cin >> x;
    index = abs(mas[0] - x);
    a = mas[0];
    for (int i = 1; i < n; i++){
        if (abs(mas[i] - x)<index)
        {
            index = abs(mas[i] - x);
            a = mas[i];
        }
    }
    cout << a;
    return 0;
}