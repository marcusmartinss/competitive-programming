#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll shortest_path();

ll n, m;
vector<ll> adj[200001];

int main()
{
    cin >> n >> m;

    for (ll i = 1; i <= m; i++)
    {
        ll a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    ll cond = shortest_path();

    if ( cond != 2 )
    {
        cout << "IMPOSSIBLE" << '\n';
        return 0;
    }
    
    cout << "POSSIBLE" << '\n';

 return 0;
}

ll shortest_path()
{
    const long size_n = n + 1;
    vector<bool> visited(size_n, false);

    queue<ll> q;
    vector<ll> dist(size_n, 0);

    if ( adj[1].empty() )
        return 3;

    for (ll i = 1; i <= n; i++)
    {
        if ( !visited[i] )
        {
            q.push(i);
            visited[i] = true;
        }

        while ( !q.empty() )
        {
            ll u = q.front();
            q.pop();

            if ( u == n )
            {
                if ( dist[u] == 0 || dist[u] == 1 )
                    return 3;
                
                return dist[u];
            }

            for ( ll v : adj[u] )
            {
                if ( !visited[v] )
                {
                    visited[v] = true;
                    q.push(v);
                    dist[v] = dist[u] + 1;
                }
            }
        }
    }

 return 3;
}