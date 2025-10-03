class Solution {
public:
    void found(vector<vector<char>>& board, int i, int j, string word, int k, bool &f){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='1' || word[k]!=board[i][j]){
            return;
        }
        if(k==word.size()-1){
            f=true;
            return;
        }
        char temp = board[i][j];
        board[i][j]='1';
        found(board, i+1, j, word, k+1, f);
        found(board, i-1, j, word, k+1, f);
        found(board, i, j+1, word, k+1, f);
        found(board, i, j-1, word, k+1, f);
        board[i][j] = temp;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i =0; i<board.size(); i++){
            for(int j = 0; j  < board[0].size(); j++){
                if(board[i][j] == word[0]){
                    bool f = false;
                    found(board, i, j, word, 0, f);
                    if(f){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};