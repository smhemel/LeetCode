class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans = nums;
        unordered_map<int, int> m;
        
        sort(ans.begin(), ans.end());
        for (int i = nums.size() - 1; i >= 0; i--) m[ans[i]] = i;
        for (int i = 0; i < nums.size(); i++) nums[i] = m[nums[i]];

        return nums;
    }
};
