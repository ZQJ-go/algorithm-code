#include <iostream>
using namespace std;
typedef long long ll;
const int N = 1000010;
int w[N], l[N], r[N];
int cnt;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        w[i] = x;
        if (++l[x] == 1)
            cnt++;
    }
    ll res = 0;
    for (int i = n; i; i--)
    {
        int x;
        x = w[i];
        r[x]++;
        l[x]--;
        if (l[x] == 0)
        {
            cnt--;
        }
        if (r[x] == 2)
        {
            res += cnt;
            if (l[x] > 0)
            {
                res--;
            }
        }
    }
    cout << res << endl;
    return 0;
}
