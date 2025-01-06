#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
bool vis[N];
vector<int> adj[N];

void dfs(int node)
{
    vis[node] = 1;
    cout << node << " ";
    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!vis[*it])
            dfs(*it);
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of Vertices and Edges: ";
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
        vis[i] = false;

    int x, y;
    cout << "Enter the edges:\nExample: 1 2\n";
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
}
