#include <iostream>
#include <algorithm>
using namespace std;
const int N = 11;
int T;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int j;
    int cnt = 0;
    int res = 0;
    for (int i = 0, k = 0; i < n; i++)
    {
        if (str[i] == 'u' && str[i + 1] == 'w' && str[i + 2] == 'a' && str[i + 3] == 'w' && str[i + 4] == 'a' && str[i + 5] == 'u' && str[i + 6] == 'w' && str[i + 7] == 'a')
        {
            j = i;
            for (; k <= j - 2; k++)
            {
                if (str[k] == 'u')
                {
                    cnt++;
                }
            }
            res += cnt;
        }
    }
    cout << res << endl;
}
int main()
{
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}