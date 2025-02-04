#include <iostream>
#include <algorithm>
using namespace std;
const int N = 8;
int main()
{
    string a;
    cin >> a;
    sort(a.begin(), a.end());
    if (a == "cdenoorw")
    {
        printf("happy new year\n");
    }
    else
        printf("I AK IOI\n");
    return 0;
}