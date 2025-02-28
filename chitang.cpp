#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 200010;
int n, m;
ll a[N];
ll b[N];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < m; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] < t)
                continue;
            int eat = min(a[j], b[i]) - t;
            a[j] += eat;
            t += eat;
            if (t == b[i])
                break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}