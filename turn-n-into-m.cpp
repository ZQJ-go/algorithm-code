#include <iostream>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m != 0)
        {
            cout << "No" << endl;
        }
        else if (n != 0 && m == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}