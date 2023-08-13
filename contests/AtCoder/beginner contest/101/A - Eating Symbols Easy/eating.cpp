/**
 * @file eating.cpp
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
    int mind = 0;
    string s;
    getline(cin, s);

    for (char c : s)
    {
        if( c == '+' )
            mind++;
        
        if ( c == '-')
            mind--;
    }

    cout << mind << endl;

 return 0;
}