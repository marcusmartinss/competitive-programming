#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200005;

vector<int> roads[MAXN], railways[MAXN];

int road_connected[MAXN], railway_connected[MAXN];

void dfs(int u, vector<int> graph[], int connected[], int current)
{
    connected[u] = current;

    for (int v : graph[u])
    {
        if (connected[v] == 0)
            dfs(v, graph, connected, current);
    }
}

int main()
{
    int n, k, l;
    cin >> n >> k >> l;

    for (int i = 0; i < k; i++)
    {
        int p, q;
        cin >> p >> q;
        roads[p].push_back(q);
        roads[q].push_back(p);
    }

    for (int i = 0; i < l; i++)
    {
        int r, s;
        cin >> r >> s;
        railways[r].push_back(s);
        railways[s].push_back(r);
    }

    int group = 0;
    
    for (int i = 1; i <= n; i++)
    {
        if (road_connected[i] == 0)
        {
            group++;
            dfs(i, roads, road_connected, group);
        }
    }

    group = 0;

    for (int i = 1; i <= n; i++)
    {
        if (railway_connected[i] == 0)
        {
            group++;
            dfs(i, railways, railway_connected, group);
        }
    }

    vector<int> ans(n, 0);

    map<pair<int, int>, int> intersection_count;

    for (int i = 1; i <= n; i++)
        intersection_count[{road_connected[i], railway_connected[i]}]++;

    for (int i = 1; i <= n; i++)
    {
        int cnt = intersection_count[{road_connected[i], railway_connected[i]}];
        ans[i - 1] = cnt;
    }

    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout << " ";
        cout << ans[i];
    }

    cout << '\n';

 return 0;
}