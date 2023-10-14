E - Joint Two Strings

Problem Statement

You are given N strings S1,S2,…,SN consisting of lowercase English letters, and a string T consisting of lowercase English letters.

There are N² pairs (i,j) of integers between 1 and N, inclusive. Print the number of pairs among them that satisfy the following condition.

- The concatenation of Si and Sj in this order contains T as a (not necessarily contiguous) subsequence.

Constrains

- N is an integer.

- 1≤N≤5×10⁵

- Si and T are strings of length 1 to 5×10⁵, inclusive, consisting of lowercase English letters.

- The total length of S1, S2, …, SN is at most 5×10⁵.

Input

The input is given from Standard Input in the following format:

N T
S1
S2
⋮
SN

Output

Print the answer.

Sample Input 1

    3 bac
    abba
    bcb
    aaca

Sample Output 1

    3

Sample Input 2

    5 xx
    x
    x
    x
    x
    x

Sample Output 2

    25

Sample Input 3

    1 y
    x

Sample Output 3

    0

Sample Input 4

    10 ms
    mkgn
    m
    hlms
    vmsle
    mxsm
    nnzdhi
    umsavxlb
    ffnsybomr
    yvmm
    naouel

Sample Output 4

    68
