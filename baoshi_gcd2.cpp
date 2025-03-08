#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 100010;
int h[N];
int n;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        h[x]++;
    }
    for (int i = N; i >= 1; i--)
    {
        int now = 0;
        int ans = 0;
        int s[3];
        for (int j = i; j <= N; j += i)
        {
            ans += h[j];
            for (int k = 0; k < h[j] && now < 3; k++)
            {
                s[now++] = j;
            }
        }
        if (ans >= 3)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", s[k]);
            }
            printf("\n");
            return 0;
        }
    }
    return 0;
}