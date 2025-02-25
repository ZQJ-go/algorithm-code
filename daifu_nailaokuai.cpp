#include<iostream>
using namespace std;
const int N = 1010;
int a[N][N], b[N][N], c[N][N];
int res;
int n, q;
void checkxy(int x, int y, int z)
{
    if(a[x][y] < n)
    a[x][y]++;
    if(a[x][y] == n)
    {
        res++;
    }

}
void checkxz(int x, int y, int z)
{
    if (b[x][z] < n)
        b[x][z]++;
    if (b[x][z] == n)
    {
        res++;
    }
}
void checkyz(int x, int y, int z)
{
    if (c[y][z] < n)
        c[y][z]++;
    if (c[y][z] == n)
    {
        res++;
    }
}
int main()
{

    cin >> n >> q;
    while(q--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        checkxy(x, y, z);
        checkxz(x, y, z);
        checkyz(x, y, z);
        cout << res << endl;
    }
    return 0;
}