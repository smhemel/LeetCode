class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int i = 0, j = nums.size() - 1, flag = true;
        while (i <= j) {
            ans.push_back(flag ? nums[i++] : nums[j--]);
            flag = !flag;
        }

        return ans;
    }
};
