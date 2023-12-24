class Solution {
public:
    bool solve(int index, int row, int col, int m, int n, vector<vector<char>>&board, string word, vector<vector<int>>&vis){
        if(index == word.length()) return true;
        if(row<0 || col<0 || row>=m || col>=n) return false;

        int dir[4] = {1, 0, 0, -1};
        int dic[4] = {0, -1, 1, 0};

        for (int i=0; i<4; i++) {
            if (row+dir[i]<m && col+dic[i] >= 0 && col+dic[i]<n && row+dir[i]>=0) {
                if(!vis[row+dir[i]][col+dic[i]] && board[row+dir[i]][col+dic[i]] == word[index]) {
                    vis[row][col]=1;
                    bool ans = solve(index+1, row+dir[i], col+dic[i], m, n, board, word, vis);
                    if(ans == true) return true;
                    vis[row][col]=0;
                }
            }
        }

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>>vis(m,vector<int>(n,0));

        for(int row=0; row<m; row++)
            for(int col=0; col<n; col++)
                if (board[row][col] == word[0] && solve(1, row, col, m, n, board, word, vis))
                    return true;

        return false;
    }
};
