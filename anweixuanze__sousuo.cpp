#include <bits/stdc++.h>
using namespace std;
const int N = 11;
int n;
int a[N], b[N];
int res, ans = 1e9;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i < (1 << n); i++)
    {
        int x = 1, y = 0;
        for (int j = 0; j < n; j++)
        {

            if ((i >> j) & 1)
            {
                x *= a[j];
                y += b[j];
            }
        }
        res = abs(y - x);
        ans = min(res, ans);
    }
    cout << ans;
}
