#include <bits/stdc++.h>
using namespace std;
bool vis[105];
vector<int> adj_list[105];
bool pathVisit[105];
bool cycle;
void dfs(int src)
{
    vis[src] = true;
    pathVisit[src] = true;
    for (int child : adj_list[src])
    {
        if (pathVisit[child])
        {
            cycle = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    pathVisit[src] = false;
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));

    cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            dfs(i);
        }
    }

    if (cycle == true)
        cout << "Cycle detected";
    else
        cout << "Cycle not detected";
    return 0;
}
