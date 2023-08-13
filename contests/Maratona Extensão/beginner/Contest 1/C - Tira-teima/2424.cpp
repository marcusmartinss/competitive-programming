/**
 * @file 2424.cpp
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
    int input_x, input_y;
    cin >> input_x >> input_y;

    if ( (input_x >= 0 && input_x <= 432) && (input_y >= 0 && input_y <= 468) )
        cout << "dentro" << endl;
    else
        cout << "fora" << endl;

 return 0;
}
