#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> a, b;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 1; i <= m; i++)
    {
        int y;
        cin >> y;
        b.push_back(y);
    }
    int cnt = 0;
    while (!a.empty() && !b.empty())
    {
        if (a.front() == b.front())
        {
            a.pop_front();
            b.pop_front();
        }
        else if (a.front() < b.front())
        {
            int a1 = a.front();
            a.pop_front();
            int a2 = a.front();
            a.pop_front();
            a.push_front(a1 + a2);
            cnt++;
        }
        else if (a.front() > b.front())
        {
            int b1 = b.front();
            b.pop_front();
            int b2 = b.front();
            b.pop_front();
            b.push_front(b1 + b2);
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
