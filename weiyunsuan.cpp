#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int l = pow(2, k);
        ll sum = 1;
        for (int i = 0; i < k; i++)
        {
            int w = n % 2;

            if (w == 1)
            {
                sum *= 12;
            }
            else
                sum *= 4;
            n /= 2;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
