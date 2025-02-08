#include <iostream>
using namespace std;
int main()
{
    long long x;
    char k;
    cin >> x >> k;
    if (k == '*')
    {
        printf("%lld 1", x);
    }
    else if (k == '+')
    {
        printf("%lld 1", x - 1);
    }
    else if (k == '-')
    {
        printf("%lld 1", x + 1);
    }
    return 0;
}