#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, q; cin >> n >> k >> q;

    int a[q];

    for (size_t i = 1; i <= n; i++)
        a[i] = k;

    int b;

    for (size_t i = 0; i < q; i++)
    {
        cin >> b;
        
        for (int j = 1; j <= n; j++){
            if (j != b) a[j] -= 1;
        }
        
    }        

    for (size_t i = 1; i <= n; i++)
    {
        if (a[i] < 1)
            cout << "No\n";
        else 
            cout << "Yes\n";
    }

 return 0;
}