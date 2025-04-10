#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
vector<int> adj[N]; 
int n;
int res;


int dfs(int u, int parent) {
    int max1 = 0, max2 = 0; 
    for (int v : adj[u]) {
        if (v == parent) continue;
        int dist = dfs(v, u) + 1; 
        if (dist > max1) {
            max2 = max1;
            max1 = dist;
        } else if (dist > max2) {
            max2 = dist;
        }
    }
    res = max(res, max1 + max2); 
    return max1;
}

int main() {
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    res = 0; 
    dfs(1, -1); // 从根节点 1 开始 DFS
    cout << res << endl;
    return 0;
}