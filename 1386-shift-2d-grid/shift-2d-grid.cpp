class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;
        
        // Effective shifts needed
        k = k % total;
        
        // Initialize the result grid with the same dimensions
        vector<vector<int>> result(m, vector<int>(n));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // 1. Convert 2D coordinates (i, j) into a 1D index
                int old_1d = i * n + j;
                
                // 2. Find the new 1D index after shifting by k
                int new_1d = (old_1d + k) % total;
                
                // 3. Convert the new 1D index back to 2D coordinates
                int new_r = new_1d / n;
                int new_c = new_1d % n;
                
                // Assign the value to the new position
                result[new_r][new_c] = grid[i][j];
            }
        }
        
        return result;
    }
};