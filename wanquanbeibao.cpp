#include <algorithm>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
typedef long long ll;
const int N = 1010;
int n, m;
int f[N][N];
int w[N], v[N];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i] >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= v[i])
            {
                f[i][j] = max(f[i][j], f[i][j - v[i]] + w[i]);
            }
        }
    }
    int res = 00;
    for (int i = 0; i <= m; i++)
    {
        res = max(res, f[n][i]);
    }
    cout << res << endl;
    return 0;
}