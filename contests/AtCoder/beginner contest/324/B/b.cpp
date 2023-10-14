#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool smooth(ll n)
{
    while ( n % 2 == 0 )
        n /= 2;

    while ( n % 3 == 0 )
        n /= 3;
    
 return n == 1;
}

int main()
{
    ll n; cin >> n;

    if ( !smooth(n) )
        cout << "No\n";
    else
        cout << "Yes\n";
    
 return 0;
}