#include <bits/stdc++.h>
using namespace std;
const int N = 310;
int f[N][N], a[N], sum[N];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = a[i] + sum[i - 1];
    }
    for (int len = 2; len <= n; len++)
    {
        for (int i = 1; i + len - 1 <= n; i++)
        {
            int j = i + len - 1;
            f[i][j] = 1e8;
            for (int k = i; k < j; k++)
            {
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + sum[j] - sum[i - 1]);
            }
        }
    }
    cout << f[1][n] << endl;
    return 0;
}