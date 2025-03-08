#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 100010;
int h[N];
int n, p, q;

int main()
{
    cin >> n >> p >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }

    sort(h + 1, h + 1 + n);
    while (p-- && h[n] >= 4)
    {
        h[n] = sqrt(h[n]);
        if (h[n] < h[n - p] && h[n - p] >= 4)
        {
            swap(h[n], h[n - p]);
        }
    }
    while (q--)
    {
        h[n] /= 2;
        if (h[n] < h[n - p] && h[n - p] >= 4)
        {
            swap(h[n], h[n - p]);
        }
    }
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += h[i];
    }
    cout << res;
    return 0;
}