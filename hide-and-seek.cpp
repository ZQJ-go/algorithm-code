#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, a, b, c;
        cin >> N >> a >> b >> c;
        if (a + b + c >= N && a + b + c <= 2 * N)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}