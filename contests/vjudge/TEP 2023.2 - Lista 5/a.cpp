/* #include <bits/stdc++.h>

using namespace std;

const int oo = 1000000010;
const int MAXN = 10001;

vector<pair<int, int>> adj[MAXN];
vector<bool> visited(MAXN, false);
priority_queue<pair<int, int>> pq;

pair<vector<int>, vector<int>> dijkstra(int s, int N)
{
    vector<int> dist(N + 1, oo), pred(N + 1, oo);

    dist[s] = 0;
    pq.emplace(0, s);

    while (!pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();

        if (visited[u])
            continue;

        visited[u] = true;

        for (auto [v, w] : adj[u])
        {
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pred[v] = u;
                pq.emplace(dist[v], v);
            }
        }
    }

    return {dist, pred};
}

int main()
{
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int a, b, w;
        cin >> a >> b >> w;

        adj[a].emplace_back(make_pair(b, w));
        adj[b].emplace_back(make_pair(a, w));
    }

    pair<vector<int>, vector<int>> result = dijkstra(1, n);

    if (result.first[n] == oo)
    {
        cout << "-1\n";
    }
    else
    {
        vector<int> result_path;
        result_path.push_back(n);

        int aux = result.second[n];

        while (aux != 1)
        {
            result_path.push_back(aux);
            aux = result.second[aux];
        }

        result_path.push_back(1);

        for (int i = result_path.size() - 1; i >= 0; i--)
        {
            cout << result_path[i] << ' ';
        }

        cout << '\n';
    }

    fill(visited.begin(), visited.end(), false);

    while (!pq.empty())
        pq.pop();

 return 0;
}
 */