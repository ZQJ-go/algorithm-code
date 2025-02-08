#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, m, n, pm[1005][1005];
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        long long ans = 0, map1[2005] = {0}, map2[2005] = {0};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> pm[i][j];
                map1[i + j] += pm[i][j];
                map2[i - j + m] += pm[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                ans = max(ans, map1[i + j] + map2[i - j + m] - pm[i][j]);
            }
        }
        cout << ans << endl;
    }
}