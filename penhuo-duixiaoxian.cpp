#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        long long grid[1010][1010];
        long long dig1[1010][1010];
        long long dig2[1010][1010];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dig1[i + 1][j + 1] = grid[i][j] + dig1[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                dig2[i + 1][j - 1] = grid[i][j] + dig2[i][j];
            }
        }

        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = m - 2; j >= 0; j--)
            {
                dig1[i][j] = dig1[i + 1][j + 1];
            }
        }

        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 1; j <= m - 1; j++)
            {
                dig2[i][j] = dig2[i + 1][j - 1];
            }
        }

        ll maxx = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll one = dig1[i][j] + dig2[i][j];

                maxx = max(maxx, one);
            }
        }

        cout << maxx << endl;
    }

    return 0;
}