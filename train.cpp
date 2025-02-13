#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, s;
int main()
{
    cin >> n >> s;
    vector<int> p; 
    vector<int> c; 
    while (n--)
    {
        int pi, ci;
        cin >> pi >> ci;
        p.push_back(pi);
        c.push_back(ci);
    }
    int sum = 0;
    while (1)
    {
        int flag = 1;
        int sum1 = 0;
        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] > 0)
            {
                sum1 += p[i];
                c[i]--;
                flag = 0;
            }
        }
        sum += min(sum1, s);
        if (flag)
            break;
    }
    cout << sum;
    return 0;
}