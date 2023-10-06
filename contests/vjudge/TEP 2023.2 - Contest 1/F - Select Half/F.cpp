/* #include <bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<int> lista;

int compare (const void * a, const void * b)
{
  return ( *(ll*)a - *(ll*)b );
}

int main()
{
    ll n, k, a; cin >> k;
    n = (k/2);
    ll values[k];

    ll s = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> a;
        values[i] = a;
    }

    qsort(values, k, sizeof(ll), compare);

    ll j = 0;
    ll i = k-1;
    while(j < n){
        s += values[i];
        i = i-2;
        j++;
    }
    
    cout << s << "\n";

 return 0;
} */