#include <bits/stdc++.h>
using namespace std;
const int maxx = 2000010;

int n, m;
int sum[maxx];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        sum[l + r]++;
    }
    for (int i = 1; i < maxx; i++)
    {
        sum[i] += sum[i - 1];
    }
    for (int i = 1; i <= m; i++)
    {
        int l, r;
        cin >> l >> r;
        l *= 2;
        r *= 2;
        cout << sum[r] - sum[l - 1] << endl;
    }
    return 0;
}