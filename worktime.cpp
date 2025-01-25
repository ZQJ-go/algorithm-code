#include <bits/stdc++.h>
using namespace std;
#define LL long long
const int N = 1e5 + 5;
void solve()
{
    int n;
    cin >> n;
    string h, m;
    cin >> h >> m;
    if (m.size() == 1)
    {
        m = "0" + m;
    }
    set<string> ans[4];
    vector<pair<string, string>> data;
    data.push_back({"07:00:00", "09:00:00"});
    data.push_back({"18:00:00", "20:00:00"});
    data.push_back({"11:00:00", "13:00:00"});
    data.push_back({"22:00:00", "01:00:00"});
    for (int i = 1; i <= n; i++)
    {
        string x, y, z;
        cin >> x >> y >> z;
        if (y.substr(0, 4) == h && y.substr(5, 2) == m)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j > 0)
                {
                    if (z >= data[j].first && z <= data[j].second)
                    {
                        ans[j].insert(x);
                    }
                }
                else
                {
                    if (z >= data[j].first && z <= data[j].second)
                    {
                        ans[1].insert(x);
                    }
                }
            }
            if (z >= data[3].first || z <= data[3].second)
            {
                ans[3].insert(x);
            }
        }
        // else{
        //     cout<<y.substr(0,4)<<" "<<h<<"\n";
        //     cout<<y.substr(5,2)<<" "<<m<<"\n";
        // }
    }
    for (int i = 1; i <= 3; i++)
    {
        cout << ans[i].size() << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin>>T;
    while (T--)
    {
        solve();
    }
    return 0;
}