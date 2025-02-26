class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        partial_sum(nums.begin(), nums.end(), nums.begin());
        auto [m, M] = minmax_element(nums.begin(), nums.end());
        
        return max(*M, 0) - min(0, *m);
    }
};
