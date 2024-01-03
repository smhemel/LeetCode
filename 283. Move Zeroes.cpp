class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans(nums.size(), 0);
        int index = 0;
        for (auto num: nums) {
            if (num != 0) ans[index++] = num;
        }

        nums = ans;
    }
};
