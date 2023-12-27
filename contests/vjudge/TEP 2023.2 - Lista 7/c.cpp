/* #include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef tuple<ll, ll, ll> edge;

const ll oo = 2147483647;

class UFDS
{
	private:
		vector<ll> size, ps;
	
	public:
		UFDS(ll n) : size(n + 1, 1), ps(n + 1)
		{
			iota(ps.begin(), ps.end(), 0);
		}

		ll find_set(ll x) const {
			return x == ps[x] ? x : find_set(ps[x]);
		}

		bool same_set(ll x, ll y) {
			return find_set(x) == find_set(y);
		}

		void union_set(ll x, ll y)
		{
			if (same_set(x, y))
				return;

			ll p = find_set(x);
			ll q = find_set(y);
			
			if (size[p] < size[q])
				swap(p, q);

			ps[q] = p;
			size[p] += size[q];
		}
};

ll kruskal(ll n, vector<edge>& es)
{
	sort(es.begin(), es.end());
	ll cost = 0;
	UFDS ufds(n);
	
	for (auto [w, u, v] : es)
	{
		if (not ufds.same_set(u, v))
		{
			cost += w;
			ufds.union_set(u, v);
		}
	}

 return cost;
}

int main()
{
	ll n, m;
	cin >> n >> m;

	vector<edge> adj(m, {oo, -1, -1});

	for (ll i = 0; i < m; i++)
	{
		ll a, b, c;
		cin >> a >> b >> c;

		if (a > b) swap(a, b);

		adj[i] = make_tuple(c, a, b);
	}

	ll result = kruskal(n, adj);

	if ( result == oo )
		cout << "IMPOSSIBLE\n";
	else
		cout << result << '\n';

 return 0;
}
 */