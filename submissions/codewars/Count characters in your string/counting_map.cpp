/**
 * @file counting_map.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @version 0.1
 * @date 2023-08-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <map>
#include <string>

using namespace std;

map<char, unsigned> count(const string& string)
{
    map<char, unsigned> char_count;

    for (char c : string)
        char_count[c]++; // Using the ASCII of 'c' as the key for the map

 return char_count;
}

/* int main()
{
    string a;
    getline(cin, a);

 return 0;
} */
