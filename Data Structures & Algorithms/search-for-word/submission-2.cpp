class Solution {
public:

    bool dfs(vector<vector<char>>& board, int i, int j, string& word, int idx){
        
        if (idx == word.size()) return true;


        if(i<0 or j<0 or i>=board.size() or j>=board[0].size() or board[i][j] != word[idx]){
            return false;
        }

        
        char temp = board[i][j];
        board[i][j] = '#';

        bool found = dfs(board, i+1, j, word, idx+1) ||
                     dfs(board, i-1, j, word, idx+1) ||
                     dfs(board, i, j+1, word, idx+1) ||
                     dfs(board, i, j-1, word, idx+1);

        board[i][j] = temp;

        return found;

    }

    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){

                if (dfs(board, i, j, word, 0)) {
                    return true;
                }

                
            }
        }
        return false;
    }
};
