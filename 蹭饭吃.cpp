<<<<<<< HEAD
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 5e6 + 10;
int a[N];
int res, n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int x = a[n / 2];

    printf("%d", x - 1);
=======
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
>>>>>>> b6a5e248ebc948e3483c77a0df181c4e03bedd40
    return 0;
}