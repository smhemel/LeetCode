class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();

        for (int i=1; i<len; i++) {
            if (nums[i-1] == nums[i]) i++;
            else if (nums[i-1] != nums[i]) {
                if (i == 1) return nums[0];
                else if (nums[i-1] == nums[i-2]) return nums[i];
                return nums[i-1];
            }
        }

        return nums[len-1];
    }
};
