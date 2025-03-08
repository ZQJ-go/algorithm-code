#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
const int N = 200010;
int T;
int h[N], a[N], rk[N];
int main()
{
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            rk[t + 1] = i;
        }
        int l = 0;
        int r = 1e9;
        for (int i = 1; i < n; i++)
        {
            int A = h[rk[i]] - h[rk[i + 1]];
            int B = a[rk[i + 1]] - a[rk[i]];
            if (B > 0)
            {
                r = min(r, (int)(ceil((double)A / B) - 1));
            }
            else if (B < 0)
            {
                l = max(l, (int)(floor((double)A / B) + 1));
            }
            else if (A <= 0)
            {
                r = -1;
                break;
            }
        }
        if (l > r)
        {
            l = -1;
        }
        printf("%d\n", l);
    }
    return 0;
}