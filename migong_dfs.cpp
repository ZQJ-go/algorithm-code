#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int n, m;
char s[N][N];
bool ss[N][N];
bool st;

void dfs(int x, int y)
{
    if (x == n && y == m)
    {
        st = true;
        return;
    }
    ss[x][y] = true;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (s[nx][ny] == '.' && !ss[nx][ny] && nx >= 1 && nx <= n && ny >= 1 && ny <= m)
        {
            dfs(nx, ny);
        }
    }
    return;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> s[i][j];
        }
    }
    dfs(1, 1);
    if (st == true)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}