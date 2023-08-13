/**
 * @file 2786.cpp
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
    int L, C;
    cin >> L >> C;

    // The number of type 1 tiles is equal to the
    // area of the room plus the number of internal
    // diagonals (which is (L - 1) * (C - 1))
    int type1 = L * C + (L - 1) * (C - 1);

    // The number of type 2 tiles is equal to the inner
    // perimeter of the room, considering that each
    // internal side is made up of two diagonals
    // (totaling 2 * (L - 1) + 2 * (C - 1))
    int type2 = 2 * (L - 1) + 2 * (C - 1);

    cout << type1 << endl;
    cout << type2 << endl;

    return 0;
}
