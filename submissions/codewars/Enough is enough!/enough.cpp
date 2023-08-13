/**
 * @file enough.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @version 0.1
 * @date 2023-07-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <vector>
#include <unordered_map>

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::unordered_map<int, int> countMap;
    std::vector<int> result;

    for (int num : arr)
    {
        if (countMap[num] < n)
        {
            result.push_back(num);
            countMap[num]++;
        }
    }

 return result;
}

// int main()
// {
//   std::cout << "{ ";
//   for( int n : deleteNth({1, 2, 3, 1, 2, 1, 2, 3}, 2))
//     std::cout << n << ", ";
  
//   std::cout << "}" << std::endl;

//  return 0;
// }