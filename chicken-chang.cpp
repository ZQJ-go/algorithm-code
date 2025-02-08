#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int T;
void solve()
{
    ll n, t, k;
    cin >> n >> t >> k;
    ll res;
    if (n - k < t)
    {
        cout << 0 << endl;
        return;
    }
    res = min((n - k) / t, (k + 1));
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