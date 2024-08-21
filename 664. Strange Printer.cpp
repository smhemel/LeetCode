class Solution {
public:
    int strangePrinter(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return Util(0, n - 1, s, dp);
    }

    int Util(int i, int j, const string& s, vector<vector<int>>& dp) {
        if (i > j) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        char firstLetter = s[i];
        int answer = 1 + Util(i + 1, j, s, dp);
        for (int k = i + 1; k <= j; k++) {
            if (s[k] == firstLetter) {
                int betterAnswer = Util(i, k - 1, s, dp) + Util(k + 1, j, s, dp);
                answer = min(answer, betterAnswer);
            }
        }

        return dp[i][j] = answer;
    }
};
