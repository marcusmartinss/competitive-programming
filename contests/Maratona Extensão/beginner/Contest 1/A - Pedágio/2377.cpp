/**
 * @file 2377.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main()
{
    int length, distance;
    cin >> length >> distance;

    int cost_per_km, toll_value;
    cin >> cost_per_km >> toll_value;

    int total = (length * cost_per_km) + ( (length / distance) * toll_value );
    cout << total << endl;

 return 0;
}
