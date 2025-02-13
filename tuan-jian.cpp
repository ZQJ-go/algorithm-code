#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int T = 200000;
vector<vector<int>> tree1(T);
vector<vector<int>> tree2(T);
vector<int> nums1(T);
vector<int> nums2(T);
int N, M;
int get()
{
    int sum = 0;
    int t1 = 1, t2 = 1;
    if (nums1[1] == nums2[1])
        sum++;
    else
        return 0;
    while (1)
    {
        int i, j;
        int flag = 1;
        if (tree1[t1].size() == 0 || tree2[t2].size() == 0)
            break;//如果最开头都不是的话，那就滚蛋吧。。。
        for (i = 0; i < tree1[t1].size(); i++)
        {
            for (j = 0; j < tree2[t2].size(); j++)//从开头开始，如果下一个链接点相同的同时，连接点对应的加权值也相同的话，就加上。
            {
                if (nums1[tree1[t1][i]] == nums2[tree2[t2][j]])
                {
                    flag = 0;
                    t1 = tree1[t1][i];//如果发现有相同的，说明上一个点已经被占用，就要同时从下一个点开始。
                    t2 = tree2[t2][j];
                    sum++;
                    break;
                }
            }
        }
        if (flag)
            break;//最后如果遍历完毕后有flo！= 0，这时候就应该退出循环了。
    }
    return sum;
}
int main()
{
    cin >> N >> M;
    int n = N, m = M;
    int temp;
    while (n--)
    {
        cin >> temp;
        nums1[N - n] = temp;
    }
    while (m--)
    {
        cin >> temp;
        nums2[M - m] = temp;
    }
    n = N - 1;
    m = M - 1;
    int t1, t2;
    int t3, t4;
    while (n--)
    {
        cin >> t1 >> t2;
        t3 = min(t1, t2);
        t4 = max(t1, t2);
        tree1[t3].push_back(t4);
    }
    while (m--)
    {
        cin >> t1 >> t2;
        t3 = min(t1, t2);
        t4 = max(t1, t2);
        tree2[t3].push_back(t4);
    }
    cout << get();
    return 0;
}