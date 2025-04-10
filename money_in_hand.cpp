#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
int f[N];
int w[N];
int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        int x, k;
        cin >> x >> k;
        for (int j = 1; j <= k; j++)
        {
            w[++ans] = x;
        }
    }
    for (int i = 1; i <= ans; i++)
    {
        for (int j = m; j >= w[i]; j--)
        {
            if (f[j - w[i]] == 1)
            {
                // printf("%d ", j);
                f[j] = 1;
            }
        }
        // printf("\n");
    }
    if (f[m])
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}