#include<bits/stdc++.h>
using namespace std;
const int N = 510;
int w[N][N], f[N][N];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
                cin >> w[i][j];
    }
    for (int i = 1; i <= n; i++)
    {
        f[n][i] = w[n][i];
    }
    for (int i = n - 1; i; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            f[i][j] = max(f[i + 1][j], f[i + 1][j + 1]) + w[i][j];
        }
    }
    cout << f[1][1] << endl;
    return 0;
}