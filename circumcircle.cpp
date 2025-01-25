#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<pair<int, int>> ans;
        int x = b - a;
        int y = d - c;
        if (x > y)
        {
            ans.push_back({a, d - 1});
            ans.push_back({b, d});
            ans.push_back({b - 1, d});
        }
        else
        {
            ans.push_back({b, d});
            ans.push_back({b, d - 1});
            ans.push_back({b - 1, c});
        }
        for (auto &[x, y] : ans)
        {
            cout << x << " " << y << endl;
        }
    }
    return 0;
}
