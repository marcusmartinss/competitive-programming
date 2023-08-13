/**
 * @file square_digits.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @version 0.1
 * @date 2023-07-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

// #include <iostream>
#include <string>

int square_digits(int num)
{
    std::string str = std::to_string(num);
    std::string result;
    int digit;

    for(char c : str)
    {
        digit = c - '0';
        result += std::to_string(digit * digit);
    }

 return std::stoi(result);
}

// int main()
// {
//     int num;
//     std::cin >> num;
//     std::cout << square_digits(num) << std::endl;

//  return 0;
// }