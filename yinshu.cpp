#include <bits/stdc++.h>
using namespace std;
set<pair<int, int>> s;//设置容器来存储因数数对
int main()
{
    int N;
    cin >> N;
    vector<int> num;
    while (N--)
    {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i + 1; j < num.size(); j++)//防止出现重复，这里选择从前一个数开始遍历。
        {
            if (num[i] % num[j] == 0)
                s.insert({j + 1, i + 1});//找到因数对
            if (num[j] % num[i] == 0)
                s.insert({i + 1, j + 1});//反过来也是如此
        }
    }
    int sum = 0;
    for (auto t1 : s)
    {
        for (auto t2 : s)//双重遍历
        {
            if (t1.first != t2.first && t1.first != t2.second && t1.second != t2.first && t1.second != t2.second)
                sum++;//这里考虑了前后顺序的问题.
        }
    }
    cout << sum;
    return 0;
}