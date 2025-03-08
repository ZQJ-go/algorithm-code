#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define int long long
const int N = 1010;
int h[N];
int n;
int sum[N * N];
int bb[N * N];

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
        sum[i] = sum[i - 1] + h[i];
    }
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            bb[k++] = sum[j] - sum[i - 1];
        }
    }
    int res = 1e18;
    sort(bb, bb + k);

    for (int i = 1; i < k; i++)
    {
        res = min(res, bb[i] - bb[i - 1]);
    }
    cout << res;
    return 0;
}