class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++) {
            nums[i] = abs(nums[i])*abs(nums[i]);
        }

        sort(nums.begin(), nums.end());
        return nums;
    }
};
