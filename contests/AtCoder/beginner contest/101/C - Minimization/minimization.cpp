/**
 * @file minimization.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, k, ans;
    cin >> n >> k;

    n--; k--;
    
    if ( (n % k) != 0 )
        ans = (n / k) + 1;
    else
        ans = (n / k);

    cout << ans << endl;

 return 0;
}