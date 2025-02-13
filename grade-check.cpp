#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];

int main()
{
    int n, k, T;
    cin >> n >> k >> T;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // 答案具有单调性，二分最少需要前多少个学生
    double M = 1.0 * T * k * k; // 作为方差答案比较
    int l = 1, r = n, res = n + 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        double b[n + 1], pf[n + 1], sum[n + 1], ans = 1e11;
        for (int i = 1; i <= mid; i++)
        {
            b[i] = a[i];
        }
        sort(b + 1, b + mid + 1);
        for (int i = 1; i <= mid; i++)
        {
            pf[i] = pf[i - 1] + b[i] * b[i];
            sum[i] = sum[i - 1] + b[i]; // 预处理前缀和
        }
        for (int i = k; i <= mid; i++)
        {
            double res = k * (pf[i] - pf[i - k]) - (sum[i] - sum[i - k]) * (sum[i] - sum[i - k]);
            ans = min(ans, res);
        }
        if (ans < M) // 说明二分答案大了，已经达到了目标，应该减小人数
        {
            r = mid - 1;
            res = min(res, mid); // 注意这里要取答案了，因为我们的mid只存在于while里面，所以这里我为了取答案，需要找一个介质来代替答案。
        }
        else
            l = mid + 1; // 说明二分答案小了，还不满足目标，应该加大人数。
    }
    if (res == n + 1)
        cout << -1 << endl;
    else
        cout << res << endl;
}
