#include <iostream>
#include <string>
using namespace std;

struct BiTNode
{
    char data;
    BiTNode *lchild, *rchild;
};

int Count(BiTNode *T) // 统计并返回结点总数
{
    if (T == NULL)
        return 0;
    else
        return Count(T->lchild) + Count(T->rchild) + 1;
}
BiTNode *CreateBiTree(string &s); // 创建二叉树，s存放带虚结点的先序遍历序列

int main()
{
    string s;
    while (cin >> s)
    {
        BiTNode *root = CreateBiTree(s);
        cout << Count(root) << endl;
    }

    return 0;
}
