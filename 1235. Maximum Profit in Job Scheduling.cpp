class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>> jobs(n);
        for (int i = 0; i < n; ++i) {
            jobs[i] = {endTime[i], startTime[i], profit[i]};
        }
        sort(jobs.begin(), jobs.end());

        vector<int> dp(n);
        dp[0] = jobs[0][2];

        for (int i = 1; i < n; ++i) {
            int l = 0, r = i;
            while (l < r) {
                int mid = l + (r - l) / 2;
                if (jobs[mid][0] <= jobs[i][1]) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }
            int currProfit = jobs[i][2];
            if (l > 0) {
                currProfit += dp[l - 1];
            }
            dp[i] = max(dp[i - 1], currProfit);
        }

        return dp[n - 1];
    }
};
