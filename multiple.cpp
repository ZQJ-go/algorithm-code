#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a[N];
        int n;
        cin >> n;
        int res = 1e9 + 7;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                res = -1;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}