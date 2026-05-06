#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];

    memset(adj_mat, 0, sizeof(adj_mat));

    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j=0 ; j<n ; j++)
    //     {
    //         if(i == j)
    //         {
    //             adj_mat[i][j] = 1;
    //         }
    //     }
    // }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // Undirected graph
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << adj_mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Check if two nodes are connected

    int u, v;
    cin >> u >> v;

    if (adj_mat[u][v] == 1)
        cout << "They are connected.";
    else
        cout << "They are not connected.";
    return 0;
}