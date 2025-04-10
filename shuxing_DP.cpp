#include <bits/stdc++.h>
using namespace std;
const int N = 6010;
int h[N], e[N], idx = 1, ne[N];
int w[N], cnt[N];
int f[N][2];
void add(int a, int b)
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
void dp(int u)
{
    f[u][1] = w[u];
    f[u][0] = 0;
    for (int i = h[u]; i; i = ne[i])
    {
        int v = e[i];
        dp(v);
        f[u][0] += max(f[v][0], f[v][1]);
        f[u][1] += f[v][0];
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        add(v, u);
        cnt[u]++;
    }
    int gen = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == 0)
        {
            gen = i;
            break;
        }
    }
    dp(gen);
    int res = max(f[gen][0], f[gen][1]);
    cout << res << endl;
    return 0;
}