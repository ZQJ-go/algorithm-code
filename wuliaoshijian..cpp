#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
const int N = 400010;
int w[2 * N];
ll s[2 * N];
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> w[i];
            w[i] = w[i] % m;
        }
        sort(w + 1, w + n + 1);
        for (int i = 1; i <= n; i++)
        {
            w[i + n] = w[i] + m;
        }
        for (int i = 1; i <= n * 2; i++)
        {
            s[i] = s[i - 1] + w[i];
        }
        ll res = 1e18;
        for (int l = 1; l <= n; l++)
        {
            int r = l + n - 1;
            int p = (l + r) / 2;
            ll left = (p - l + 1) * (ll)w[p] - (s[p] - s[l - 1]);
            ll right = (s[r] - s[p]) - (r - p) * (ll)w[p];
            res = min(res, left + right);
        }
        cout << res << endl;
    }
    return 0;
}