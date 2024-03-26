class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int numsLen = nums.size();
        int ans = 1;
        for (int i=0; i<numsLen-1; i++) {
            if (nums[i] > 0) {
                if (nums[i] != ans) return ans;
                else if (nums[i+1] > ans) ans++;
            }
        }

        if (nums[numsLen-1] == ans) return ++ans;

        return ans;
    }
};
