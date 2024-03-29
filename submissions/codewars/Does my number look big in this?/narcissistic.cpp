/**
 * @file narcissistic.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <bits/stdc++.h>

// using namespace std;

bool narcissistic( int value )
{
    int num_to_compare = 0;
    int aux = value;
    int digits = log10(value) + 1; // get the number of digits

    while ( aux )
    {
        num_to_compare += pow((aux % 10), digits);
        aux /= 10;
    }

 return num_to_compare == value;
}

/*
int main()
{
    int value;
    cin >> value;

    cout << narcissistic(value) << endl;

 return 0;
}
*/
