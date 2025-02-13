#include <iostream>
#include<algorithm>
using namespace std;
int a[10][10]; // 表示棋盘
int ans = 0;
void dfs(int n1, int n2, int id, int c) // 白棋个数，黑棋个数，当前格子序号，当前格子颜色
{
    // 如果白棋超过13个，黑棋超过12个,则停止搜索
    if (n1 >= 14 || n2 >= 13 || id >= 25)
        return;
    int x = id / 5, y = id % 5; // 将序号转为坐标
    a[x][y] = c;                // 将当前格放置对应棋子
    // 判断当前横行是否连成一线，如果y<4，则此行未摆满5个棋子不须判断
    if (y == 4)
    {
        bool flag = 0;
        for (int i = 0; i <= 4; i++)
        {
            if (a[x][i] != a[x][0])
                flag = 1;
        }
        if (flag == 0)
            return;
    }
    // 判断当前纵行是否连成一线，如果x<4，则此列未摆满5个棋子不须判断
    if (x == 4)
    {
        bool flag = 0;
        for (int i = 0; i <= 4; i++)
        {
            if (a[i][y] != a[0][y])
                flag = 1;
        }
        if (flag == 0)
            return;
    }
    // 判断对角线是否连成一线，当id=20时，第一条对角线才被填满
    if (id == 20)
    {
        bool flag = 0;
        for (int i = 0; i <= 4; i++)
        {
            if (a[i][4 - i] != a[0][4])
                flag = 1;
        }
        if (flag == 0)
            return;
    }
    // 判断对角线是否连成一线，当id=24时，第二条对角线才被填满
    if (id == 24)
    {
        bool flag = 0;
        for (int i = 0; i <= 4; i++)
        {
            if (a[i][i] != a[0][0])
                flag = 1;
        }
        if (flag == 0)
            return;
    }
    // 函数执行到这一行，说明没有连成一线的情况，若已经枚举完最后一个棋子，说明是平局
    if (id >= 24)
    {
        ans++;
        return;
    }
    dfs(n1 + 1, n2, id + 1, 1); // 将下一个格子放白棋
    x = (id + 1) / 5, y = (id + 1) % 5;
    a[x][y] = 0;                // 撤销白棋
    dfs(n1, n2 + 1, id + 1, 2); // 将下一个格子放黑棋
    x = (id + 1) / 5, y = (id + 1) % 5;
    a[x][y] = 0; // 撤销黑棋
}
int main()
{
    dfs(1, 0, 0, 1); // 枚举第一个格子放白棋的所有情况
    dfs(0, 1, 0, 2); // 枚举第一个格子放黑棋的所有情况
    cout << ans;
    return 0;
}