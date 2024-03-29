# C - Minimization

Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 300 points

## Problem Statement
There is a sequence of length N: A<sub>1</sub>, A<sub>2</sub>, ... , A<sub>N</sub>. Initially, this sequence is a permutation of 1, 2, ..., N.

On this sequence, Snuke can perform the following operation:

- Choose **_K_** consecutive elements in the sequence. Then, replace the value of each chosen element with the minimum value among the chosen elements.

Snuke would like to make all the elements in this sequence equal by repeating the operation above some number of times. Find the minimum number of operations required. It can be proved that, Under the constraints of this problem, this objective is always achievable.

## Constraints

- 2 ≤ K ≤ N ≤ 100000
- A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub> is a permutation of 1, 2, ..., N.

## Input

Input is given from Standard Input in the following format:

N K

A<sub>1</sub> A<sub>2</sub> ... A<sub>N</sub>

## Output

Print the minimum number of operations required.

### Sample Input 1

    4 3
    2 3 1 4

### Sample Output 1

    2

One optimal strategy is as follows:

- In the first operation, choose the first, second and third elements. The sequence `A` becomes 1, 1, 1, 4.

- In the second operation, choose the second, third and fourth elements. The sequence `A` becomes 1, 1, 1, 1.

### Sample Input 2

    3 3
    1 2 3

### Sample Output 2

    1

### Sample Input 3

    8 3
    7 3 1 8 4 6 2 5

### Sample Output 3

    4