#include <bits/stdc++.h>
using namespace std;
const int N = 1010, M = 15;
char str[N][M];
int f[M][M];
int n, m;
int dist(char str[], char s[])
{
    int cnt = 0;
    int la = strlen(str + 1), lb = strlen(s + 1);
    for (int i = 0; i <= la; i++)
        f[i][0] = i;
    for (int i = 0; i <= lb; i++)
        f[0][i] = i;
    for (int i = 1; i <= la; i++)
    {
        for (int j = 1; j <= lb; j++)
        {
            f[i][j] = min(f[i - 1][j] + 1, f[i][j - 1] + 1);
            if (str[i] == s[j])
            {
                f[i][j] = min(f[i][j], f[i - 1][j - 1]);
            }
            else
                f[i][j] = min(f[i][j], f[i - 1][j - 1] + 1);
        }
    }
    return f[la][lb];
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i] + 1);
    }
    while (m--)
    {
        char s[M];
        int k;
        cin >> s + 1 >> k;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (dist(str[i], s) <= k)
            {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}