#include <bits/stdc++.h>

using namespace std;

int soma(int num)
{
    int soma = 0;

    while (num > 0) 
    {
        soma += num % 10;
        num /= 10;
    }

 return soma;
}

int main()
{
    int a, b;

    cin >> a >> b;

    int soma1 = soma(a);
    int soma2 = soma(b);

    if ( soma1 > soma2 )
        cout << soma1 << '\n';
    else
        cout << soma2 << '\n';

 return 0;
}