class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n, 0));

        for (int i = 0; i < indices.size(); i++) {
            int sr = indices[i][0];
            int cr = indices[i][1];

            for (int j = 0; j < m; j++) matrix[j][cr] += 1;
            for (int k = 0; k < n; k++) matrix[sr][k] += 1;
        }

        int count = 0;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++)
                if (matrix[i][j]&1) count++;
            
            cout << endl;
        }
        
        return count;
    }
};
