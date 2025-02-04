#include <iostream>
#include <vector>

using namespace std;

void solve2()
{
    int n;
    cin >> n;

    cout << "Yes\n";

    int m = (n + 1) * (n + 2) >> 1;

    vector<int> a, b(m + 1);

    for (int i = 1, k = 1; i <= n + 1; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            b[k++] = i;
        }
    }

    auto push_down = [&a, &b, &n](int i) -> int
    {
        for (; b[i] <= n;)
        {
            a.push_back(i);
            i += b[i];
        }
        return i;
    };

    auto push_up = [&a, &b, &n](int i) -> int
    {
        for (; b[i] == b[i + 1];)
        {
            a.push_back(i);
            a.push_back(i + 1);
            i -= b[i] - 1;
        }
        i = a.back();
        a.pop_back();
        return i;
    };

    for (int i = 1; i <= n; ++i)
    {
        int d = push_down(i * (i + 1) >> 1);
        push_up(d);
    }

    for (int i = n + 1; i >= 1; --i)
    {
        a.push_back(i * (i + 1) >> 1);
    }

    for (const int &v : a)
    {
        cout << v << ' ';
    }
    cout << '\n';
}

int main()
{

    int T = 1;
    // cin >> T;

    while (T--)
    {
        solve2();
    }

    return 0;
}