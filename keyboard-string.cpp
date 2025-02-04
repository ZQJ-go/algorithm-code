#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
string s[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    int ans = 0;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        sort(s + l, s + 1 + r);
        ans += s[l].size();
        int tmp = s[l].size();
        int pos = l;
        for (int i = l + 1; i <= r; i++)
        {
            if (s[i].size() > tmp)
                tmp = s[i].size(), pos = i;
        }
        //         swap(s[pos],s[r]);
        for (int i = l + 1; i <= r; i++)
        {
            int j = 0;
            while (j < s[i].size() && j < s[i - 1].size())
            {
                if (s[i][j] == s[i - 1][j])
                    j++;
                else
                    break;
            }
            ans += (s[i - 1].size() - j + s[i].size() - j);
            //             tmp = max(tmp,(int)s[i].size());
        }
        ans += s[r].size(); // 让最后一个变为空串
        ans -= tmp;         // 长度最长的字符串不按退格键
        cout << ans << endl;
    }

    return 0;
}