#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9 + 7;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, ans = 1, ans1 = 1, ans2 = 1;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
        {
            if (s[0] == '?')
                cout << 2 << endl;
            else
                cout << 1 << endl;
            continue;
        }
        else
        {
            for (int i = 0; i <= n - 1; i++)
            {
                if (s[i] == '?')
                    cnt++;
            }
            for (int i = 1; i <= cnt; i++)
            {
                ans1 *= 2;
                ans1 %= mod;
            }
            for (int i = 1; i <= cnt - 1; i++)
            {
                ans2 *= 2;
                ans2 %= mod;
            }
            if (s[0] != '?' && s[n - 1] != '?')
            {
                if (s[0] == s[n - 1])
                    ans = ans1 * (n - 2) % mod;
                else
                    ans = ans1 * 2 % mod;
            }
            else
                ans = n * ans2 % mod;
        }
        cout << ans << endl;
    }
    return 0;
}