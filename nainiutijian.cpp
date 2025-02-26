#include <iostream>
using namespace std;
const int N = 7510;
int n;
int w[N], g[N];
int ans[N];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> g[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (w[i] == g[i])
            cnt++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int sum = cnt;
            for (int l = i, r = i + j; l >= 1 && r <= n; l--, r++)
            {
                if (w[l] == g[l])
                    sum--;
                if (w[r] == g[r])
                    sum--;
                if (w[l] == g[r])
                    sum++;
                if (w[r] == g[l])
                    sum++;
                ans[sum]++;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", ans[i]);
    }
    return 0;
}