class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        sort(logs.begin(), logs.end());
        vector<int> ans(k, 0);
        int i = 0;

        while (i < logs.size()) {
            i++;
            int cnt = 0;

            while (i < logs.size() && logs[i][0] == logs[i - 1][0]) {
                if (logs[i][1] != logs[i - 1][1]) cnt++;
                i++;
            }

            ans[cnt]++;
        }

        return ans;
    }
};
