#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

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

    ll ans = 0;

    while (true)
    {
        set<ll> to_remove;

        for (ll i = 1; i <= n; i++)
            if (adj[i].size() == 1)
                to_remove.insert(i);

        if (to_remove.empty()) break;

        for (ll i : to_remove)
        {
            ll neighbor = adj[i][0];

            adj[neighbor].erase(remove(adj[neighbor].begin(), adj[neighbor].end(), i), adj[neighbor].end());
            adj[i].clear();
        }

        ans++;
    }

    cout << ans << '\n';

 return 0;
}
