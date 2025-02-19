#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 2010;
int x[N], y[N];
int n;
double ch(int a, int b, int c, int d)
{
    double ret;
    ret = sqrt((c - a) * (c - a) + (d - b) * (d - b)) * 1.0;
    return ret;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        x[i] = a;
        y[i] = b;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                double h1 = ch(x[i], y[i], x[j], y[j]);
                double h2 = ch(x[i], y[i], x[k], y[k]);
                double h3 = ch(x[j], y[j], x[k], y[k]);
                if (h1 + h2 > h3 && h1 + h3 > h2 && h2 + h3 > h1)
                    if (h1 == h2 || h1 == h3 || h2 == h3)
                    {
                        ans++;
                    }
            }
        }
    }
    cout << ans << endl;
    return 0;
}