#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    int aux = n;

    while (aux)
    {
        sum += aux % 10;
        aux /= 10;
    }

    (n % sum == 0) ? cout << "Yes" << endl : cout << "No" << endl;
    
 return 0;
}