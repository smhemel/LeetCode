class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if (n <= 2) return true;

        for (int i = 1; i < n - 1; i++) {
            int num1 = coordinates[i][0] - coordinates[i - 1][0];
            int dnum1 = coordinates[i][1] - coordinates[i - 1][1];
            int num2 = coordinates[i + 1][0] - coordinates[i][0];
            int dnum2 = coordinates[i + 1][1] - coordinates[i][1];

            if (num1 * dnum2 != num2 * dnum1) {
                return false;
            }
        }

        return true;
    }
};
