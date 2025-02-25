#include<iostream>
#include<algorithm>
using namespace std;
const int N = 20010;
const int M = 26;
int n, m;
char s[N];
int x[M][M];
bool st[M][M];
void update(int l, int r, int v)
{
    l = max(l, 0);
    r = min(r, n - 1);
    for (int i = l; i + 2 <= r; i++)
    {
        int a = s[i], b = s[i + 1], c = s[i + 2];
        if(a != b && b == c)
        {
            x[a][b]+= v;
            if(x[a][b] >= m)
            {
                st[a][b] = true;
            }
        }
        
    }
}
int main()
{
    cin >> n >> m;
    scanf("%s", &s);
    for (int i = 0; i < n; i ++)
    {
        s[i] -= 'a';
    }
    update(0, n - 1, 1);
    for (int i = 0; i < n; i++)
    {
        char t = s[i];
        update(i - 2, i + 2, -1);
        for (int j = 0; j < 26; j++)
        {
            if(t != j)
            {
                s[i] = j;
                update(i - 2, i + 2, 1);
                update(i - 2, i + 2, -1);
            }
        }
        s[i] = t;
        update(i - 2, i + 2, 1);
    }
    int res = 0;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (st[i][j])
            {
                res++;
            }
        }
    }
    cout << res << endl;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (st[i][j])
            {
                printf("%c%c%c\n", i + 'a', j + 'a', j + 'a');
            }
        }
    }
    return 0;
}