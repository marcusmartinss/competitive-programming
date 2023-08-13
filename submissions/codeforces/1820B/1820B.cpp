/**
 * @file 1820B.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <algorithm> // to use the function count()
using namespace std;

long long count_occurrences(const string& str, char ch);
long long find_max_sequence_of_ones(const string& binary_string);
long long calculate_total_area(long long max_area);


int main()
{
    long long num_test_cases;
    cin >> num_test_cases;

    while ( num_test_cases-- )
    {
        string binary_string;
        cin >> binary_string;

        long long binary_string_length = binary_string.length();

        if( count_occurrences(binary_string, '0') == 0 )
        {
            cout << binary_string_length * binary_string_length << endl;
            continue;
        }
        
        if( count_occurrences(binary_string, '1') == 0 )
        {
            cout << 0 << endl;
            continue;
        }
        
        string doubled_string = binary_string + binary_string;

        long long max_sequence = find_max_sequence_of_ones(doubled_string);

        if( max_sequence == 1 )
        {
            cout << 1 << endl;
            continue;
        }

        long long total_area = calculate_total_area(max_sequence);
        
        cout << total_area << endl;
    }
    
 return 0;
}

long long count_occurrences(const string& str, char ch)
{
    return count(str.begin(), str.end(), ch);
}

long long find_max_sequence_of_ones(const string& binary_string)
{
    long long longest_sequence = 0;
    long long current_sequecence = 0;

    for (char ch : binary_string) // for each character of binary string, with ch recieving each one
    {
        if( ch == '1' )
        {
            current_sequecence++;
            longest_sequence = max(current_sequecence, longest_sequence);
        }
        else
            current_sequecence = 0;
    }

 return longest_sequence;
}

long long calculate_total_area(long long max_sequence)
{
    long long total_area = 0;
    long long width = 1; // as max_sequence is bigger than one, width already starts in 1

    for (long long height = max_sequence; height >= 1; height--) // trying different combinations of height and width
    {
        total_area = max(total_area, height * width);
        width++;
    }
    
 return total_area;
}