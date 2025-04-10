#include <bits/stdc++.h>
using namespace std;
const int N = 2010;
typedef long long ll;
int a[N];
int f[N];
int main()
{
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] % p;
    }
    memset(f, 0x3f, sizeof f);
    for (int i = 0; i < n; i++)
    {
        f[a[i]] = 1;
        if (a[i] == 0)
        {
            printf("1\n");
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (f[j] != 1e9)
            {
                int t = (a[i] + j) % p;
                f[t] = min(f[j] + 1, f[t]);
            }
        }
    }
    cout << f[0] << endl;
    return 0;
}