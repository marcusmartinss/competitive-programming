# B - FizzBuzz Sum

## Problem Statement

Let us define the FizzBuzz sequence $​a_{1}, a_{2},...$ as follows:

- If both 3 and 5 divides i, $a_{i} = FizzBuzz$

- If the above does not hold but 3 divides i, $a_{i} = Fizz$
  ​
- If none of the above holds but 5 divides i, $a_{i} = Buzz$
  ​
- If none of the above holds, $a_{i} = i$.

Find the sum of all numbers among the first N terms of the FizzBuzz sequence.

## Constrains

- $1 ≤ N ≤ 10^6$

## Input

Input is given from Standard Input in the following format:

$N$

## Output

Print the sum of all numbers among the first $N$ terms of the FizzBuzz sequence.

### Sample 1

| Input | Output |
| ----- | ------ |
| 15    | 60     |

The first 15 terms of the FizzBuzz sequence are:

1, 2,Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14,FizzBuzz

Among them, numbers are 1,2,4,7,8,11,13,14, and the sum of them is 60.

### Sample 2

| Input   | Output       |
| ------- | ------------ |
| 1000000 | 266666333332 |
