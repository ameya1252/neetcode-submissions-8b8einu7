class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int original, int color) {
        // out of bounds
        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size())
            return;

        // wrong color
        if (image[i][j] != original)
            return;

        // fill
        image[i][j] = color;

        // explore 4 directions
        dfs(image, i+1, j, original, color);
        dfs(image, i-1, j, original, color);
        dfs(image, i, j+1, original, color);
        dfs(image, i, j-1, original, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int original = image[sr][sc];

        if (original == color) return image; // avoid infinite loop

        dfs(image, sr, sc, original, color);

        return image;
    }
};