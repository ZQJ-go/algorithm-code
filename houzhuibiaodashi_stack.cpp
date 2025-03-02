#include <iostream>
#include <string>
#include <stack>
using namespace std;

double postfix_exp(string A)
{
    stack<double> tes;
    double res = 0.0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        double a = 0.0, b = 0.0;
        if (A[i] == '+')
        {
            a = tes.top();
            tes.pop();
            b = tes.top();
            tes.pop();
            tes.push(a + b);
        }
        else if (A[i] == '-')
        {
            a = tes.top();
            tes.pop();
            b = tes.top();
            tes.pop();
            tes.push(b - a);
        }
        else if (A[i] == '*')
        {
            a = tes.top();
            tes.pop();
            b = tes.top();
            tes.pop();
            tes.push(a * b);
        }
        else if (A[i] == '/')
        {
            a = tes.top();
            tes.pop();
            b = tes.top();
            tes.pop();
            tes.push(b / a);
        }
        else
        {
            a = A[i] - '0';
            tes.push(a);
        }
    }
    res = tes.top();
    return res;
}

// 调用后缀式计算函数，输出计算结果（保留2位小数）
int main()
{
    string s;
    cin >> s;
    printf("%.2lf\n", postfix_exp(s));
    return 0;
}