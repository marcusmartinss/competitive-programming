#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];

    for (size_t i = 0; i < n; i++)
        cin >> a[i];
    
    for (size_t i = 0; i < n; i++)
        if ( i > 0 && a[i] != a[i-1])
        {
            cout << "No\n";
            return 0;
        }

    cout << "Yes\n";

 return 0;
}