#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, m;
vector<ll> adj[200001];
vector<ll> colors(200001, 0);
vector<ll> col_count(200001, 0);

ll dfs(ll node, ll parent)
{
    int steps = 0;

    if ( colors[node] != colors[parent])
        steps++;
    
    for (ll child : adj[node])
        if (child != parent)
            steps += dfs(child, node);
    
 return steps;
}

int main()
{
    cin >> n;

    for (ll i = 2; i <= n; i++)
    {
        ll a; cin >> a;
        adj[i].emplace_back(a);
        adj[a].emplace_back(i);
    }

    for (ll i = 1; i <= n; i++)
        cin >> colors[i];
    
    cout << dfs(1, 0) << '\n';

 return 0;
}