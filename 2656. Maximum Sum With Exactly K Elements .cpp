class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int maxNum = nums[nums.size() - 1];

        for (int i=0; i<k; i++) {
            ans += maxNum;
            maxNum++;
        }

        return ans;
    }
};
