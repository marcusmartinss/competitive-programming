/**
 * @file 4A.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if ( n > 2 && n % 2 == 0 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
 return 0;
}