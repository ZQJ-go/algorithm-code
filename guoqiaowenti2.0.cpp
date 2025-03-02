// 欧拉函数
#include <iostream>
using namespace std;
int du[1010];
int f[1010];
int n, m;
int find(int x)
{
    if (f[x] != x)
        f[x] = find(f[x]);
    return f[x];
}

void add(int x, int y)
{
    int fx = find(x);
    int fy = find(y);
    if (fx > fy)
    {
        f[fx] = fy;
    }
    else
    {
        f[fy] = fx;
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < 1010; i++)
        f[i] = i;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        add(x, y);
        du[x]++;
        du[y]++;
    }
    int flag = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (du[i] % 2 != 0)
        {
            flag = 0;
        }
        if (i == f[i])
        {
            sum++;
        }
    }
    if (sum != 1)
        flag = 0;
    if (flag == 1)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}