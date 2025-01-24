#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Task = 1;
    for (cin >> Task; Task; Task--)
    {
        int n, m;
        cin >> n >> m;
        if (n == m || n - m > 26)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << (char)('a' + i % (n - m));
        }
        cout << "\n";
    }
}
