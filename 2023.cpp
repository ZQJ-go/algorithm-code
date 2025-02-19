#include <iostream>
#include <vector>
using namespace std;

vector<int> add;
const int N = 3e6;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int j = 0;
        int x = i;
        while (x > 0)
        {
            j = x % 10;
            if (j == 2 || j == 0 || j == 3)
                add.push_back(j);
            x /= 10;
        }
    }
    long long res = 0;
    for (int i = 0; i < add.size(); i++)
    {
        if (add[i] != 2)
            continue;
        for (int j = i + 1; j < add.size(); j++)
        {
            if (add[j] != 0)
                continue;
            for (int k = j + 1; k < add.size(); k++)
            {
                if (add[k] != 2)
                    continue;
                for (int l = k + 1; l < add.size(); l++)
                {
                    if (add[i] == 2 && add[j] == 0 && add[k] == 2 && add[l] == 3)
                    {
                        res++;
                    }
                }
            }
        }
    }

    printf("%lld", res);
    return 0;
}