class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;

        vector<vector<int>> matrix(n, vector<int>(n));
        int counter = 1;

        while(top <= bottom and left <= right){
            
            //move right
            for(int j = left; j <= right; j++){

                matrix[top][j] = counter;
                counter++;
                

            }
            top++;

            //move down
            for(int i = top; i <= bottom; i++){

                matrix[i][right] = counter;
                counter++;
                
            }
            right--;

            //move left
            if(left <= right){

                for(int j = right; j >= left; j--){

                    matrix[bottom][j] = counter;
                    counter++;
                    
                }
                bottom--;
            }

            //move up
            if(top <= bottom){

                for(int i = bottom; i >= top; i--){

                    matrix[i][left] = counter;
                    counter++;
                    
                }
                left++;
            }
            
        }

        return matrix;

    }
};