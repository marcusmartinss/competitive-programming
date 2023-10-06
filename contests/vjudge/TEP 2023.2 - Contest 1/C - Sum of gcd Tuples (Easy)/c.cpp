#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll a, i, j, k, z = 0;

ll mdc(ll num1, ll num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

int main()
{
    cin >> a;

    for (i = 1; i <= a; i++)
        for (j = 1; j <= a; j++)
            for (k = 1; k <= a; k++)
                z += mdc(mdc(k, j), i);
    
    cout << z << '\n';

 return 0;
}