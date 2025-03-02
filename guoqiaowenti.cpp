#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1010;
int w[N][N];
int ans;
int n, m;
void dfs(int x)
{
    if (ans == m)
    {
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (w[x][i] == 1 || w[i][x] == 1)
        {
            w[x][i] = w[i][x] = 0;
            ans++;
            dfs(i);
            if (ans == m)
                return;
            ans--;
            w[x][i] = w[i][x] = 1;
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            w[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        w[x][y] = w[y][x] = 1;
    }
    dfs(1);
    if (ans == m)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}