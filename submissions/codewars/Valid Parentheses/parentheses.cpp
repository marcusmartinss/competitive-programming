/**
 * @file parentheses.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @version 0.1
 * @date 2023-08-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <bits/stdc++.h>

using namespace std;

bool validParentheses(const string& str)
{
    if (str.empty()) return true;

    // Count to keep track of open parentheses
    int count = 0;

    for (char c : str) 
    {
        if (c == '(')
            count++;
        else
        {
            if (c == ')') 
            {
                // If we encounter a ')' without matching open parentheses, the string is invalid.
                if (count == 0)
                    return false;
                
             count--;
            }
        }
    }

    // The string is valid if all open parentheses have been closed properly.
 return count == 0;
}

/* int main()
{
    string a;
    getline(cin, a);
    
    cout << validParentheses(a) << '\n';

 return 0;
} */
