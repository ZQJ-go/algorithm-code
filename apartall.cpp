#include <iostream>
using namespace std;
#define int long long
int n, m, num, cnt;
char a[509][509];
int st[509][509];
void dfs(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return;
    if (a[x][y] == '0')
    {
        if (st[x][y] != cnt)
        {
            num++;
            st[x][y] = cnt;
        }
    }
    else
    {
        a[x][y] = '0';
        st[x][y] = cnt;
        dfs(x + 1, y);
        dfs(x, y + 1);
        dfs(x - 1, y);
        dfs(x, y - 1);
    }
}
void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }
    int ans = 1e6;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (a[i][j] == '1')
            {
                ++cnt;
                num = 0;
                dfs(i, j);
                ans = min(ans, num);
            }
        }
    }
    cout << ans;
    return;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin>>T;
    while (T--)
    {
        solve();
    }
    return 0;
}
