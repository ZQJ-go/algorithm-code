#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n;
string a;
void solve()
{
    cin >> a;
    int v = 0;
    int x;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i - 1] == '2')
        {
            v = x;
        }
        if (a[i] == '0')
        {
            v += 10;
        }
        else if (a[i] == '1')
        {
            v -= 5;
            if (v < 0)
            {
                v = 0;
            }
        }
        else if (a[i] == '2')
        {
            x = v;
            v -= 10;
            if (v < 0)
            {
                v = 0;
            }
        }
        sum += v;
    }
    cout << sum << endl;
}
int main()
{
    cin >> n;

    solve();

    return 0;
}