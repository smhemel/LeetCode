class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        int size = 0;

        for (int num : nums) {
            int i = 0, j = size;

            while (i != j) {
                int mid = i + (j - i) / 2;

                if (dp[mid] < num) {
                    i = mid + 1;
                } else {
                    j = mid;
                }
            }

            dp[i] = num;

            if (i == size) {
                size++;
            }
        }

        return size;
    }
};
