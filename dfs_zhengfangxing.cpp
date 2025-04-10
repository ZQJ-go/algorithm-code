#include <bits/stdc++.h>
using namespace std;

const int N = 110;
int n, t, a[N], b[N], l, tot;
int T;
bool dfs(int t, int k, int idx)
{
    if (idx == 4)
        return true;
    for (int i = t + 1; i <= n; i++)
    {
        if (k + a[i] < l && !b[i])
        {
            b[i] = 1;
            if (dfs(t, k + a[i], idx))
                return true;
            b[i] = 0;
        }
        if (k + a[i] == l && !b[i])
        {
            b[i] = 1;
            if (dfs(0, 0, idx + 1))
                return true;
            b[i] = 0;
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            b[i] = 0;
        }
        tot = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            tot += a[i];
        }
        sort(a + 1, a + n + 1);
        reverse(a + 1, a + n + 1);
        l = tot / 4;
        if (tot % 4 != 0 || a[1] > l)
        {
            printf("no\n");
            continue;
        }
        if (dfs(0, 0, 1))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}