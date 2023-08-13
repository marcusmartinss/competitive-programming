/**
 * @file reverse_words.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @version 0.1
 * @date 2023-06-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <bits/stdc++.h>

using namespace std;

string reverse_words(string str);

int main()
{
    string str;
    getline(cin, str);

    cout << reverse_words(str) << endl;

 return 0;
}

string reverse_words(string str)
{
    int start_pos = 0; 
    int string_size = str.length();

    for ( int i = 0; i <= string_size; i++)
    {
        if ( str[i] == ' ' || i == string_size )
        {
            reverse( str.begin() + start_pos, str.begin() + i );
            start_pos = i + 1;
        }
    }
    
 return str;
}
