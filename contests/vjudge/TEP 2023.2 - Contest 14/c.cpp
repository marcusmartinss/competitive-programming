#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int a[n];
    a[0] = -1;

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    
    vector<int> count(n, 0);

    for (int i = 1; i < n; i++)
    {
        count[a[i] - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << count[i] << '\n';
    }

 return 0;
}