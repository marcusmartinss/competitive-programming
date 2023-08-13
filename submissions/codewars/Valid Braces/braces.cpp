/**
 * @file square_digits.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @version 0.1
 * @date 2023-07-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <bits/stdc++.h>

using namespace std;

bool valid_braces(std::string braces) 
{
    stack<char> stck;

    for (char c : braces)
    {
        // If it's an opening brace, push it onto the stack
        if (c == '(' || c == '[' || c == '{')
            stck.push(c);
        else
        {
            // If it's a closing brace and the stack is empty, return false
            if (stck.empty()) return false;

            char top = stck.top(); // Get the top element from the stack
            stck.pop(); // Remove the top element from the stack

            // Check if the current closing brace matches the most recent opening brace from the stack
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{'))
                    return false;
        }
    }

 // If the loop completes and the stack is empty, all braces were matched properly, so return true
 return stck.empty();
}

/* int main()
{
    string a;
    getline(cin, a);
    
    cout << valid_braces(a) << '\n';

 return 0;
} */
