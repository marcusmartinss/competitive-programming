#include <bits/stdc++.h>

using namespace std;

const int MAXN = 300003;

vector<int> adj[MAXN];

int bfs(int s, int t)
{
    vector<int> dist(MAXN, -1);
    queue<int> q;
    
    q.push(s);
    dist[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        if (u == t) return dist[u] / 3;

        for (int v : adj[u])
            if (dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
    }

 return -1;
}

int main()
{
    int n, m; cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--; v--;

        for (int j = 0; j < 3; j++)
            adj[u * 3 + j].push_back(v * 3 + (j + 1) % 3);
    }

    int s, t; cin >> s >> t;
    s--; t--;

    int result = bfs(s * 3, t * 3);
    cout << result << '\n';

 return 0;
}
