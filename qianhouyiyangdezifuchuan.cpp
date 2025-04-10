#include <bits/stdc++.h>
using namespace std;
const int N = 200010;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            map<char, int> mp1;
            map<int, char> mp2;
            string s;
            cin >> s;
            bool f = true;
            if (s.size() != n)
            {
                printf("NO\n");
                continue;
            }
            for (int j = 0; j < s.size(); j++)
            {
                if (mp1.find(s[j]) == mp1.end() && mp2.find(a[j]) == mp2.end())
                {
                    mp1[s[j]] = a[j];
                    mp2[a[j]] = s[j];
                }
                else if ((mp1.find(s[j]) != mp1.end() && mp1[s[j]] != a[j]) || (mp2.find(a[j]) != mp2.end() && mp2[a[j]] != s[j]))
                {
                    f = false;
                    printf("NO\n");
                    break;
                }
            }
            if (f == true)
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}