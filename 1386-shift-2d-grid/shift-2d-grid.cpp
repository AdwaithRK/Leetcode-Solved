class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {


      for(int i = 0; i < k; i++){
        
        int temp = grid[grid.size() - 1][grid[0].size() -1];
        int temp1, temp2;

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if( i == 0 && j == 0) {
                    temp1 = grid[i][j];
                    continue;
                }
                temp2 = grid[i][j];
                grid[i][j] = temp1;
                temp1 = temp2;
            }
        }

        grid[0][0] = temp;
      }

        return grid;
        
    }
};