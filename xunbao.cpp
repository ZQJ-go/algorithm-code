#include <bits/stdc++.h>
using namespace std;
const int N = 3e8;

int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};
long long va, ans; // 宝藏, 岛屿

int n, m;
int mp[N];
bool st[N];
bool dfs(int x, int y)
{
    bool ss = false;
    queue<pair<int, int>> q;
    q.push({x, y});
    st[x * m + y] = true;
    while (!q.empty())
    {
        pair<int, int> it = q.front();
        q.pop();

        // st[it.first * m + it.second] = true;
        if (mp[it.first * m + it.second] > 1)
            ss = true;
        for (int i = 0; i < 4; ++i)
        {
            int xx = it.first + dx[i], yy = it.second + dy[i];

            if (xx >= 0 && xx < n && yy >= 0 && yy < m)
            {

                if (!st[xx * m + yy] && mp[xx * m + yy])
                {
                    if (mp[xx * m + yy] > 1)
                        ss = true;
                    st[xx * m + yy] = true;
                    q.push({xx, yy});
                }
            }
        }
    }

    return ss;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; ++i)

    {
        string temp;
        cin >> temp;
        for (int j = 0; j < m; ++j)
            mp[m * i + j] = temp[j] - '0';
    }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if (!st[m * i + j] && mp[m * i + j])
            {
                if (dfs(i, j))
                    ++va;
                ans++;
            }
        }

    cout << ans << ' ' << va;
    return 0;
}