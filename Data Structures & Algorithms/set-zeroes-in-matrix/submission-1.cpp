class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<pair<int, int>> counter;

        for(int i = 0; i < matrix.size(); i++){

            for(int j = 0; j < matrix[i].size(); j++){

                if(matrix[i][j] == 0){
                    counter.push_back({i, j});
                }
            }   
        }

        for(auto& p : counter){

            int r = p.first;
            int c = p.second;

            for(int j = 0; j < matrix[0].size(); j++)
                matrix[r][j] = 0;

            for(int i = 0; i < matrix.size(); i++)
                matrix[i][c] = 0;
        }

        //return matrix;

        

        
    }
};
