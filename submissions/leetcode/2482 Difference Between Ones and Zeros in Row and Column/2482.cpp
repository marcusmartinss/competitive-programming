class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<int> onesRow(row, 0), onesCol(col, 0), zerosRow(row, 0), zerosCol(col, 0);

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == 1)
                {
                    onesRow[i]++;
                    onesCol[j]++;
                }
                else
                {
                    zerosRow[i]++;
                    zerosCol[j]++;
                }
            }
        }

        vector<vector<int>> diff(row, vector<int>(col, 0));

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }
        return diff;
    }
};