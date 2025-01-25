#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll sum = m;
        ll ji = 1;

        if (m == 1)
        {
            cout << 1 << endl;
            continue;
        }

        else
        {
            while (n > sum)
            {
                sum *= m;
                ji++;
            }
            if (fabs(sum - n) >= fabs((sum / m) - n))
            {
                ji--;
            }
            if (ji < 1)
                cout << 1 << endl;
            else
                cout << ji << endl;
        }
    }
    return 0;
}