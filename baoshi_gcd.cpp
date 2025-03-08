#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 100010;
int h[N];

int n;
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
ll LCM(int a, int b, int c)
{
    int x1 = gcd(a, b);
    ll r = a * b / x1;
    int x2 = gcd(r, c);
    ll res = r * c / x2;
    return res;
}
ll jd(int a, int b, int c)
{
    ll res;
    ll bb = LCM(a, b, 1) * LCM(a, c, 1) * LCM(b, c, 1);
    ll aa = a * b * c * LCM(a, b, c);
    res = aa / bb;
    return res;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int res = 0;
    int g;
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                g = jd(h[i], h[j], h[k]);
                if (g > res)
                {
                    a = h[i];
                    b = h[j];
                    c = h[k];
                }
                res = max(g, res);
            }
        }
    }
    printf("%d %d %d", a, b, c);
    return 0;
}