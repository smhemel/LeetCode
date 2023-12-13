class Solution {
public:
    bool isSpecialElement(int x, int y, vector<vector<int>>& mat) {
        for (int i=0; i<mat[x].size(); i++) {
            if (mat[x][i] == 1 && i != y) {
                return false;
            }
        }

        for (int i=0; i<mat.size(); i++) {
            if (mat[i][y] == 1 && i != x) {
                return false;
            }
        }

        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        for (int i=0; i<mat.size(); i++) {
            for (int j=0; j<mat[i].size(); j++) {
                if(mat[i][j] == 1 && isSpecialElement(i,j, mat)) {
                    cout << i << " " << j << endl;
                    ans++;
                }
            }
        }

        return ans;
    }
};
