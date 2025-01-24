
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 5e6 + 10;
int a[N];
int res, n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int x = a[n / 2];

    printf("%d", x - 1);
    return 0;
}