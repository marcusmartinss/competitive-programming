B - 3-smooth Numbers /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
200 points

Problem Statement
You are given a positive integer N. If there are integers x and y such that $N=2^{x}*3^{y}$, print Yes; otherwise, print No.

Constraints
1≤N≤10^{18}

N is an integer.

Input
The input is given from Standard Input in the following format:
N

Output
Print a single line containing Yes if there are integers x and y that satisfy the condition, and No otherwise.

Sample Input 1
324

Sample Output 1
Yes

For x=2,y=4, we have $2^{x}*3^{y}=2^{2}*3^{4} = 4 × 81 = 324$, so the condition is satisfied. Thus, you should print Yes.

Sample Input 2
5

Sample Output 2
No

There are no integers x and y such that 2^{x}\*3^{y}=5. Thus, you should print No.

Sample Output 3
32

Sample Output 4
37748736

Sample Output 4
Yes
