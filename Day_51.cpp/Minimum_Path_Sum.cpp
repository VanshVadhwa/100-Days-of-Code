#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> arr(m, vector<int>(n, 0));
        
        arr[0][0] = grid[0][0];
        
        for (int j = 1; j < n; ++j) {
            arr[0][j] = arr[0][j - 1] + grid[0][j];
        }
        
        for (int i = 1; i < m; ++i) {
            arr[i][0] = arr[i - 1][0] + grid[i][0];
        }
        
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                arr[i][j] = grid[i][j] + min(arr[i - 1][j], arr[i][j - 1]);
            }
        }
        return arr[m - 1][n - 1];
    }
};