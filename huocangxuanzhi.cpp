#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
const int N = 100010;
int a[N];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll res = 0;
    int x;
    if (n % 2 != 0)
    {
        x = a[n / 2];
    }
    else
        x = a[n / 2 - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            res += x - a[i];
        }
        else
            res += a[i] - x;
    }
    cout << res;
    return 0;
}