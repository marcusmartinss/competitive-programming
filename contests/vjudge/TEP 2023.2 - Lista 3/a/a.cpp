#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

vector<ll> adj[200001];

int main()
{
	ll n, k; cin >> n >> k;

	for(int i = 1; i <= n; i++)
	{
		ll b; cin >> b;
		adj[i].emplace_back(b);
	}

	ll pos = 1;

	while(k--)
	{
		cout << pos << " ";
	       	pos = adj[pos].back();
	}

	cout << '\n' << pos << '\n';

 return 0;
}
