

class Solution {
public:

    void dfs(vector<vector<int>>& grid, int i, int j, int& area){

        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size()){
            return;
        }

        if (grid[i][j] == 0)
            return;

        // ✅ mark as visited
        grid[i][j] = 0;
        area++;

        // explore 4 directions
        dfs(grid, i + 1, j,area);
        dfs(grid, i - 1, j,area);
        dfs(grid, i, j + 1,area);
        dfs(grid, i, j - 1,area);



    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int count = 0;
        
        int max_area = 0;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {

                if(grid[i][j] == 1){
                    int area = 0;
                    count++;
                    dfs(grid, i, j, area);
                    max_area = max(max_area, area);
                }
            }
        }

        return max_area;

    }
};
