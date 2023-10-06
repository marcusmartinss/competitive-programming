#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{

    ll a; cin >> a;
    ll b = 0;

    for (ll i = a; i != 0; i--)
    {
        if (i % 3 == 0 || i % 5 == 0)
            continue;
        
        b += i;
    }
    
    cout << b << '\n';

 return 0;
}