#include <iostream>
#include <algorithm>
using namespace std;
const int N = 110;
int n;
void solve()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    int res = 0;
    res = max(x * a, y * b);
    res = max(res, z * c);
    cout << res << endl;
}
int main()
{
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}