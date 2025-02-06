#include <iostream>
#include <algorithm>
using namespace std;
const int N = 200010;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    ll res = 0;
    ll a[n];
    ll minn = 2e9;
    ll maxx = -2e9;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        //         minn = min(minn,a[i]);
        //         maxx = max(maxx,a[i]);
    }
    //     ll add = minn * 2;
    //     minn = min(add,minn);
    sort(a, a + n);
    a[0] *= 2;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] * 2 <= a[n - 1])
        {
            a[i] *= 2;
        }
    }
    sort(a, a + n);
    res = abs(a[n - 1] - a[0]);
    cout << res << endl;
    return 0;
}