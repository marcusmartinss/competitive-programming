#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;

typedef long long ll;

ll n, m, restaurants = 0;
vector<short int> cats(MAXN, 0);
vector<bool> visited(MAXN, false);
vector<ll> adj[MAXN];

void dfs(ll u, ll consecutive_cats)
{
    visited[u] = true;

    if ( cats[u] == 1 )
        consecutive_cats++;
    else
        consecutive_cats = 0;
    
    if ( consecutive_cats > m )
        return;
    
    bool is_leaf = true;

    for ( int v : adj[u] )
        if ( !visited[v] )
        {
            is_leaf = false;
            dfs(v, consecutive_cats);
        }

    if (is_leaf) restaurants++;
}

int main()
{
    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
        cin >> cats[i];

    for (ll i = 1; i <= n; i++)
    {
        ll b, c; cin >> b >> c;
        adj[b].emplace_back(c);
        adj[c].emplace_back(b);
    }

    dfs(1, 0);

    cout << restaurants << '\n';

 return 0;
}