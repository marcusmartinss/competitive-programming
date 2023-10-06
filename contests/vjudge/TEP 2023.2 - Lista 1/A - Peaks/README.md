# A - Peaks

## Problem Statement

There are _N_ observatories in AtCoder Hill, called Obs. 1, Obs. 2, ..., Obs. N. The elevation of Obs. i is H<sub>i</sub>. There are also _M_ roads, each connecting two different observatories. Road _j_ connects Obs. A<sub>j</sub> and Obs. B<sub>j</sub>.

Obs. i is said to be good when its elevation is higher than those of all observatories that can be reached from Obs. i using just one road. Note that Obs. i is also good when no observatory can be reached from Obs. i using just one road.

How many good observatories are there?

## Constraints

- 2 ≤ N ≤ 10<sup>5</sup>
- 1 ≤ M ≤ 10<sup>5</sup>
- 1 ≤ H <sub>i</sub> ≤ 10<sup>9</sup>
- 1 ≤ A<sub>i</sub>, B<sub>i</sub> ≤ N
- A<sub>i</sub> != B<sub>i</sub>
- Multiple roads may connect the same pair of observatories
- All valies input are integers

## Input

Input is given from Standard Input in the following format:

    N M
    H1 H2 ... HN
    A1 B1
    A2 B2
    .
    .
    AM BM

## Output

Print the number of good observatories.

### Sample 1

#### Input

    4 3
    1 2 3 4
    1 3
    2 3
    2 4

#### Output

    2

- From Obs. 1, you can reach Obs. 3 using just one road. The elevation of Obs. 1 is not higher than that of Obs. 3, so Obs. 1 is not good.

- From Obs. 2, you can reach Obs. 3 and 4 using just one road. The elevation of Obs. 2 is not higher than that of Obs. 3, so Obs. 2 is not good.

- From Obs. 3, you can reach Obs. 1 and 2 using just one road. The elevation of Obs. 3 is higher than those of Obs. 1 and 2, so Obs. 3 is good.

- From Obs. 4, you can reach Obs. 2 using just one road. The elevation of Obs. 4 is higher than that of Obs. 2, so Obs. 4 is good.

**Thus, the good observatories are Obs. 3 and 4, so there are two good observatories.**

### Sample 2

#### Input

    6 5
    8 6 9 1 2 1
    1 3
    4 2
    4 3
    4 6
    4 6

#### Output

    3
