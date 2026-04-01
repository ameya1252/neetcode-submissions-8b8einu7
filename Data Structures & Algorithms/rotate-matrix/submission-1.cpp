class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int height = matrix.size();
        int width = matrix[0].size();

        vector<vector<int>> temp = matrix;
        
        for (int y = 0; y < matrix.size(); ++y) {

            for (int x = 0; x < matrix[y].size(); ++x){

                
                int newX = y;
                int newY = width - 1 - x;

                temp[newX][newY] = matrix[x][y];

            }
        }

        matrix = temp;


    }


};
