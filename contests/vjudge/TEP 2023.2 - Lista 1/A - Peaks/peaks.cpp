#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    const int LIST_SIZE = 100001;

    ll n, m;

    cin >> n >> m;

    const long size_n = n + 1;

    vector<ll> h;
    h.push_back(0);

    for (ll i = 1; i <= n; i++)
    {
        ll tmp = 0; cin >> tmp;
        h.push_back(tmp);
    }

    vector<ll> adj[LIST_SIZE];

    for (ll i = 1; i <= m; i++)
    {
        ll a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    ll good_obs = 0;
    
    for (ll i = 1; i <= n; i++)
    {
        ll tmp_good_obs = 0;

        for (ll j = 0; j < adj[i].size(); j++)
            if ( h[i] > h[ adj[i][j] ] )
                tmp_good_obs++;

        if ( tmp_good_obs == adj[i].size() )
            good_obs++;
    }

    cout << good_obs << '\n';

 return 0;
}
