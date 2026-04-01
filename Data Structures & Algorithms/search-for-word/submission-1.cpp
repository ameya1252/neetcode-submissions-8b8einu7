class Solution {
public:

    void dfs(vector<vector<char>>& board, int i, int j, string word,  string check, bool& ans){
        
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size() or check.size()>word.size()){
            return;
        }

        

        check += board[i][j];

        

        if(check == word){
            ans = true;
        }

        char temp = board[i][j];
        board[i][j] = '#';

        dfs(board, i+1, j, word, check, ans);
        dfs(board, i-1, j, word, check, ans);
        dfs(board, i, j+1, word, check, ans);
        dfs(board, i, j-1, word, check, ans);

        board[i][j] = temp;

    }

    bool exist(vector<vector<char>>& board, string word) {
        bool ans = false;
        string check;
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){

                if(board[i][j] == word[0]){
                    dfs(board, i, j, word, check, ans);
                }

                
            }
        }
        
        return ans;
    }
};
