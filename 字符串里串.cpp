#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    char s[n + 2];
    int res = 0;
    int temp = 0;
    scanf("%s", s + 1);
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (s[i] == s[j])
            {
                temp = max(n - j + 1, temp);
                break;
            }
        }
    }
    for (i = n; i >= 1; i--)
    {
        for (j = i - 1; j >= 1; j--)
        {
            if (s[i] == s[j])
            {
                if (i == n && j == 1)
                    temp = 0;
                else
                {
                    temp = max(j, temp);
                    break;
                }
            }
        }
    }
    printf("%d", temp);
    return 0;
}