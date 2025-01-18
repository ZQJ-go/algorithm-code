#include <iostream>
using namespace std;
const int N = 21;
int n, m;
int path[N];
bool st[N];
void dfs(int u)
{
    if (u == m)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%3d", path[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!st[i] && i > path[u - 1])
        {
            path[u] = i;
            st[i] = true;
            dfs(u + 1);
            st[i] = false;
        }
    }
}
int main()
{
    cin >> n >> m;
    dfs(0);
    return 0;
}