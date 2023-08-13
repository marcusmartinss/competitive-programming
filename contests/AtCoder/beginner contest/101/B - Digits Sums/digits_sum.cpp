/**
 * @file digits_sum.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

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