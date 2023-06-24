class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int longest = 2, numsLen = nums.size(), right = 1;
        vector<unordered_map<int,int>> dp(numsLen);

        while (right < numsLen) {
            for (int i=0; i<right; i++) {
                int diff = nums[right] - nums[i];
                dp[right][diff] = dp[i].count(diff) ? dp[i][diff] + 1 : 2;
                longest = max(longest, dp[right][diff]);
            }
            right++;
        }

        return longest;
    }
};
