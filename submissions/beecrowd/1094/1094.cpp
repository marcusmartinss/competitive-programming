/**
 * @file 1094.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
 
int fib (int num, int& calls);

int main(void)
{
    int n, input, calls;
    
    std::cin >> n;
    
    for(; n; n--)
    {
        calls = -1;
        std::cin >> input;
        int result = fib(input, calls);
        
        std::cout << "fib(" << input << ") = " << calls << " calls = " << result << std::endl;
    }
 
 return 0;
}

int fib (int num, int& calls)
{
	calls++;
	
	if (num == 0 || num == 1) return num;
    
 return fib(num - 1, calls) + fib(num - 2, calls);
}