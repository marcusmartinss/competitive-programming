#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    int a = 0;

    for (int i = 0; i < m; i++)
    {
        int aux; cin >> aux;
        a += aux;
    }
    
    int ans = n - a;

    if ( ans < 0 )
        cout << "-1\n";
    else
        cout << ans << '\n';

 return 0;
}