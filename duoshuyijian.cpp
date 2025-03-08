#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 100010;
int T;
vector<int> p[N];
int main()
{
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            p[i].clear();
        }
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            p[x].push_back(i);
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j + 1 < p[i].size(); j++)
            {
                if(p[i][j + 1] - p[i][j] <= 2)
                {
                    cnt++;
                    printf("%d ", i);
                    break;
                }
            }
        }
        if(!cnt)
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}