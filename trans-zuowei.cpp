#include <iostream>
#include <algorithm>
using namespace std;
const int N = 100010;
int cnt[N];
int a[N];
int ans;
int res;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        while (cnt[a[i]] > 2)
        {
            cnt[a[i]]--;
            res++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] == 1)
        {
            ans++;
        }
    }
    if (ans <= res)
    {
        cout << res << endl;
        return 0;
    }
    else
    {
        ans -= res;
        ans /= 2;
        ans += res;
    }
    cout << ans << endl;
    return 0;
}