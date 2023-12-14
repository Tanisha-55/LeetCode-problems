class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row = grid.size(), col=grid[0].size();
        vector<vector<int>> diff(grid.size(), vector<int>(grid[0].size(), 0));
        vector<int> noOfonesRow(row, 0), noOfonesCol(col, 0);
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]==1){
                    noOfonesRow[i]++;
                    noOfonesCol[j]++;
                }
            }
        }
        for(int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                diff[i][j] = noOfonesRow[i] + noOfonesCol[j] - ( row - noOfonesRow[i] ) - (col - noOfonesCol[j]);
            }
        }
        return diff;
    }
};