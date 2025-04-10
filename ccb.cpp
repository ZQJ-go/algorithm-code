#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string, int> mp_b, mp_c;
const int N = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    ll sum1 = 0;
    ll sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[0] == 'c')
            mp_c[s]++;
        if (s[0] == 'b')
            mp_b[s]++;
    }
    sum1 = mp_c.size();
    sum2 = mp_b.size();
    ll sum = 0;
    ll j = 0;
    while (sum1--)
    {
        sum = sum + j;
        j++;
    }
    sum *= 2;
    ll res = sum * sum2;
    res = res % N;
    cout << res << endl;

    return 0;
}