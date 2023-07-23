#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll digit_sum(ll num)
{
    ll sum = 0;

    while (num)
    {
        sum += num % 10;
        num /= 10;
    }

 return sum;
}

int main()
{
    int k;
    cin >> k;

    ll current_snuke = 1;
    ll increment = 1;

    while (k--)
    {
        cout << current_snuke << endl;

        if ((current_snuke + 1) % (increment * 10) == 0 &&
            digit_sum(current_snuke + increment) * increment <= (current_snuke + increment))
                increment *= 10;

        current_snuke += increment;
    }

 return 0;
}
