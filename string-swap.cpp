#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        if (n < m)
        {
            swap(n, m);
            swap(s, t);
        }
        map<int, int> mp;
        for (auto &i : s)
        {
            mp[i]++;
        }
        int sum = 0;
        for (auto &i : t)
        {
            if (mp[i])
                mp[i]--;
            else
                sum++;
        }
        int ans = 0;
        for (auto &[x, y] : mp)
        {
            if (y & 1)
                ans++;
        }
        if (sum >= ans)
            ans = sum;
        else
        {
            ans -= sum;
            ans /= 2;
            ans += sum;
        }
        cout << ans << endl;
    }
}
