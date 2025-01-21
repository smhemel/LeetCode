class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int, pair<int, int>> mp;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) 
                mp[mat[i][j]] = {i, j};

        vector<vector<int>> row(n);
        vector<vector<int>> col(m);

        for (int i = 0; i < arr.size(); i++) {
            pair<int, int> p = mp[arr[i]];
            row[p.first].push_back(1);
            col[p.second].push_back(1);

            if (row[p.first].size() == m) return i;
            if (col[p.second].size() == n) return i;
        }

        return 1;
    }
};
