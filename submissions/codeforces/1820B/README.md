# B. JoJo's Incredible Adventures

- time limit per test: 1 second

- memory limit per test: 256 megabytes

- input: standard input

- output: standard output

---

Did you think there was going to be a JoJo legend here? But no, that was me, Dio!

Given a binary string s of length _n_ , consisting of characters 0 and 1. Let's build a square table of size _n_ × _n_, consisting of 0 and 1 characters as follows.

In the first row of the table write the original string _s_ . In the second row of the table write cyclic shift of the string _s_ by one to the right. In the third row of the table, write the cyclic shift of line _s_ by two to the right. And so on. Thus, the row with number _k_ will contain a cyclic shift of string _s_ by _k_ to the right. The rows are numbered from 0 to n−1 top-to-bottom.

In the resulting table we need to find the rectangle consisting only of ones that has the largest area.

We call a rectangle the set of all cells (i, j) in the table, such that x1 ≤ i ≤ x2 and y1 ≤ j ≤ y2 for some integers 0 ≤ x1 ≤ x2 < _n_ and 0 ≤ y1 ≤ y2< _n_.

Recall that the cyclic shift of string _s_ by _k_ to the right is the string _s_<sub>n−k+1</sub> ... _s_<sub>n</sub>_s_<sub>1</sub>_s_<sub>2</sub> ... _s_<sub>n−k</sub>. For example, the cyclic shift of the string "01011" by 0 to the right is the string itself "01011", its cyclic shift by 3 to the right is the string "01101".

## Input

Each test consists of multiple test cases. The first line contains a single integer _t_ (1 ≤ _t_ ≤ 2⋅10<sup>4</sup>) — the number of test cases. The description of test cases follows.

The first and the only line of each test case contains a single binary string _s_
(1 ≤ |_s_| ≤ 2⋅10<sup>5</sup>), consisting of characters 0 and 1.

It is guaranteed that the sum of string lengths |_s_| over all test cases does not exceed 2⋅10<sup>5</sup>
.

## Output

For each test case, output a single integer — the maximum area of a rectangle consisting only of ones. If there is no such rectangle, output 0.

## Example

### input

    5
    0
    1
    101
    011110
    101010

### output

    0
    1
    2
    6
    1

## Note

In the first test case, there is a table 1×1 consisting of a single character 0, so there are no rectangles consisting of ones, and the answer is 0.

In the second test case, there is a table 1×1, consisting of a single character 1, so the answer is 1.

In the third test case, there is a table:

**1** 0 1

**1** 1 0

0 1 1

In the fourth test case, there is a table:

0 1 1 1 1 0

0 0 1 **1 1 1**

1 0 0 **1 1 1**

1 1 0 0 1 1

1 1 1 0 0 1

1 1 1 1 0 0

In the fifth test case, there is a table:

**1** 0 **1** 0 **1** 0

0 **1** 0 **1** 0 **1**

**1** 0 **1** 0 **1** 0

0 **1** 0 **1** 0 **1**

**1** 0 **1** 0 **1** 0

0 **1** 0 **1** 0 **1**

Rectangles with maximum area are shown in bold.
