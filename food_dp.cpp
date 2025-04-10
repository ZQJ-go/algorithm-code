#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int f[N][N];
int v[N], z[N], w[N];
int main()
{
    int h, t;
    cin >> h >> t;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i] >> z[i] >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = h; j >= v[i]; j--)
        {
            for (int k = t; k >= z[i]; k--)
            {
                f[j][k] = max(f[j][k], f[j - v[i]][k - z[i]] + w[i]);
            }
        }
    }
    cout << f[h][t] << endl;
    return 0;
}