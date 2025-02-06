#include <iostream>
#include <unordered_map>
using namespace std;
typedef long long ll;
void solve()
{
    unordered_map<ll, int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    int sz = -1;
    if (mp.size() != 2)
    {
        cout << "No" << endl;
        return;
    }
    for (auto &[x, y] : mp)
    {
        if (sz == -1)
            sz = y;
        else if (sz != y)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}