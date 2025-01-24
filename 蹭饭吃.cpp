#include <bits/stdc++.h>
using namespace std;
int a[500005];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int t = (n + 1) / 2;
    if (n % 2 == 0)
    {
        cout << a[t + 1] - 1;
    }
    else
    {
        if (t == 1)
        {
            cout << a[1] - 1;
        }
        else
        {
            cout << a[t] - 1;
        }
    }
    return 0;
}