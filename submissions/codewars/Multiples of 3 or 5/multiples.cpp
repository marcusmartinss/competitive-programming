/*
#include <bits/stdc++.h>

using namespace std;
*/
int sum_multiples(int number, int multiplier)
{
    int count = number / multiplier;
 return multiplier * (count * (count + 1)) / 2;
}

int solution(int number) 
{
    number--;

    int sum = sum_multiples(number, 3) + sum_multiples(number, 5) - sum_multiples(number, 15);

 return sum;
}

/*
int main()
{
    int number;
    cin >> number;

    cout << solution(number) << endl;

 return 0;
}
*/