#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long l, r;
        cin >> l >> r;
        cout << r - l + 1 << endl;
    }
    return 0;
}