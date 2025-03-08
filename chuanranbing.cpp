#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 100010;
char s[N];
vector<int> cnt;
int n;
int main()
{
    scanf("%d%s", &n, s);
    int r = n;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0')
            continue;
        int j = i + 1;
        while(j < n && s[j] == '1')
        {
            j ++ ;
        }

        int c = j - i;
        int d = (c - 1) / 2;
        if(!i || j == n)
        {
            d = c - 1;
        }
        r = min(r, d);
        cnt.push_back(c);
        i = j;
    }
    int res = 0;
    for(int c: cnt)
    {
        res += (c + r * 2) / (r * 2 + 1);
        
    }
    printf("%d\n", res);
    return 0;
}