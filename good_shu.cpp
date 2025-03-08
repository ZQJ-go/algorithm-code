#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 10000010;
int sum[N];
int i;

int main()
{
    for (int i = 1; i <= N; i++)
    {
        int x = i;
        int p = 0;
        bool s = false;
        while (x > 0 && !s)
        {
            int j = x % 10;
            x /= 10;
            if (p == 0)
            {
                if (j % 2 == 0)
                {
                    s = true;
                }
                p = 1;
            }
            else if (p = 1)
            {
                if (j % 2 != 0)
                {
                    s = true;
                }
                p = 0;
            }
        }
        if (!s)
        {
            sum[i] = sum[i - 1] + 1;
        }
        else
            sum[i] = sum[i - 1];
    }
    int n;
    cin >> n;
    printf("%d", sum[n]);
    return 0;
}