#include <bits/stdc++.h>
using namespace std;
const int N = 5010;
int f[N];
int n, k;
int ses[N], w[N];
int main()
{
    cin >> n >> k >> f[0];
    for (int i = 1; i <= n; i++)
    {
        cin >> ses[i] >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j >= 1; j--)
        {
            if (ses[i] == 1 || (ses[i] == 2 && f[j - 1] < 1900))
                f[j] = max(f[j], f[j - 1] + (int)floor((w[i] - f[j - 1]) / 4.0));
            else
                f[j] = f[j - 1];
        }
    }
    cout << f[k] << endl;
}