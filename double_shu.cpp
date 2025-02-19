#include <iostream>
#include <vector>
using namespace std;
#define int __int128

const int N = 10000010;
long long x = 23333333333333;
vector<int> add;
bool st[N];
long long res = 0;

void isprime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            add.push_back(i);
        for (int j = 0; j < add.size() && add[j] * i <= N; j++)
        {
            st[add[j] * i] = true;
            if (i % add[j] == 0)
                break;
        }
    }
}

signed main()
{
    int n;
    scanf("%d", &n);
    isprime(n);
    for (int i = 0; i < add.size(); i++)
    {
        for (int j = i + 1; j < add.size(); j++)
        {
            if (add[i] * add[i] * add[j] * add[j] > x)
                break;
            else if (add[i] * add[i] * add[j] * add[j] < 2333)
                continue;
            res++;
        }
    }
    printf("%lld", res);
    return 0;
}