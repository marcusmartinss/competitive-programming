/**
 * @file 2455.cpp
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
    int p1, p2, c1, c2;
    cin >> p1 >> c1 >> p2 >> c2;

    int left_side = p1 * c1;
    int right_side = p2 * c2;

    if ( left_side == right_side )
        cout << "0";
    else
        if ( left_side > right_side )
            cout << "-1";
        else
            cout << "1";
    
    cout << endl;

 return 0;
}