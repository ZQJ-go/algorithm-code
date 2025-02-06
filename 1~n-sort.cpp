#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 100010;
int main()
{
    int n;
    int a[N];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ll sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i > a[i])
        {
            sum1 += i - a[i];
        }
        else
            sum2 += a[i] - i;
    }
    if (sum1 != sum2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sum1 << endl;
    }
    return 0;
}