# 2482. Difference Between Ones and Zeros in Row and Column

You are given a 0-indexed m x n binary matrix grid.

A 0-indexed m x n difference matrix diff is created with the following procedure:

- Let the number of ones in the i<sup>th</sup> row be onesRow<sub>i</sub>.

- Let the number of ones in the j<sup>th</sup> column be onesCol<sub>j</sub>.

- Let the number of zeros in the i<sup>th</sup> row be zerosRow<sub>i</sub>.

- Let the number of zeros in the j<sup>th</sup> column be zerosCol<sub>j</sub>.

- diff[i][j] = onesRow<sub>i</sub> + onesCol<sub>j</sub> - zerosRow<sub>i</sub> - zerosCol<sub>j</sub>

Return the difference matrix diff.

### Example 1:

![](./assets/2487-image1.png)

- **Input:** grid = [[0,1,1],[1,0,1],[0,0,1]]

- **Output:** [[0,0,4],[0,0,4],[-2,-2,2]]

- **Explanation:**

  - diff[0][0] = onesRow<sub>0</sub> + onesCol<sub>0</sub> - zerosRow<sub>0</sub> - zerosCol<sub>0</sub> = 2 + 1 - 1 - 2 = 0

  - diff[0][1] = onesRow<sub>0</sub> + onesCol<sub>1</sub> - zerosRow<sub>0</sub> - zerosCol<sub>1</sub> = 2 + 1 - 1 - 2 = 0

  - diff[0][2] = onesRow<sub>0</sub> + onesCol<sub>2</sub> - zerosRow<sub>0</sub> - zerosCol<sub>2</sub> = 2 + 3 - 1 - 0 = 4

  - diff[1][0] = onesRow<sub>1</sub> + onesCol<sub>0</sub> - zerosRow<sub>1</sub> - zerosCol<sub>0</sub> = 2 + 1 - 1 - 2 = 0

  - diff[1][1] = onesRow<sub>1</sub> + onesCol<sub>1</sub> - zerosRow<sub>1</sub> - zerosCol<sub>1</sub> = 2 + 1 - 1 - 2 = 0

  - diff[1][2] = onesRow<sub>1</sub> + onesCol<sub>2</sub> - zerosRow<sub>1</sub> - zerosCol<sub>2</sub> = 2 + 3 - 1 - 0 = 4

  - diff[2][0] = onesRow<sub>2</sub> + onesCol<sub>0</sub> - zerosRow<sub>2</sub> - zerosCol<sub>0</sub> = 1 + 1 - 2 - 2 = -2

  - diff[2][1] = onesRow<sub>2</sub> + onesCol<sub>1</sub> - zerosRow<sub>2</sub> - zerosCol<sub>1</sub> = 1 + 1 - 2 - 2 = -2

  - diff[2][2] = onesRow<sub>2</sub> + onesCol<sub>2</sub> - zerosRow<sub>2</sub> - zerosCol<sub>2</sub> = 1 + 3 - 2 - 0 = 2

### Example 2:

![](./assets/2487-image2.png)

- **Input:** grid = [[1,1,1],[1,1,1]]

- **Output:** [[5,5,5],[5,5,5]]

- **Explanation:**

  - diff[0][0] = onesRow<sub>0</sub> + onesCol<sub>0</sub> - zerosRow<sub>0</sub> - zerosCol<sub>0</sub> = 3 + 2 - 0 - 0 = 5

  - diff[0][1] = onesRow<sub>0</sub> + onesCol<sub>1</sub> - zerosRow<sub>0</sub> - zerosCol<sub>1</sub> = 3 + 2 - 0 - 0 = 5

  - diff[0][2] = onesRow<sub>0</sub> + onesCol<sub>2</sub> - zerosRow<sub>0</sub> - zerosCol<sub>2</sub> = 3 + 2 - 0 - 0 = 5

  - diff[1][0] = onesRow<sub>1</sub> + onesCol<sub>0</sub> - zerosRow<sub>1</sub> - zerosCol<sub>0</sub> = 3 + 2 - 0 - 0 = 5

  - diff[1][1] = onesRow<sub>1</sub> + onesCol<sub>1</sub> - zerosRow<sub>1</sub> - zerosCol<sub>1</sub> = 3 + 2 - 0 - 0 = 5

  - diff[1][2] = onesRow<sub>1</sub> + onesCol<sub>2</sub> - zerosRow<sub>1</sub> - zerosCol<sub>2</sub> = 3 + 2 - 0 - 0 = 5

### Constraints:

- m == grid.length

- n == grid[i].length

- 1 <= m, n <= 105

- 1 <= m, n <= 105

- grid[i][j] is either 0 or 1.
