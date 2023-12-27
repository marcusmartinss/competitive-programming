/* #include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;

vector<pair<int, int>> adj[MAXN];
vector<int> dist;

void dfs(int u, int p, vector<int>& dist)
{
    for (auto [v, w] : adj[u])
    {
        if (v != p)
        {
            dist[v] = dist[u] + w;
            dfs(v, u, dist);
        }
    }
}

int solve(int n)
{
    vector<int> dist(n + 1, 0);

    dfs(0, -1, dist);

    auto v = (int) (max_element(dist.begin(), dist.end()) - dist.begin());
    
    dist[v] = 0;
    
    dfs(v, -1, dist);

 return *max_element(dist.begin(), dist.end());
}

int main()
{
    int n; cin >> n;

    for (int i = 1; i < n; i++)
	{
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].emplace_back(make_pair(v, w));
        adj[v].emplace_back(u, w);
    }

    int result = solve(n);

    cout << result << '\n';

 return 0;
}
 */