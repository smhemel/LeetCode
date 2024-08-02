class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        
        if (total == 0) return 0;
        
        nums.insert(nums.end(), nums.begin(), nums.end());
        
        int window_sum = accumulate(nums.begin(), nums.begin() + total, 0);
        int max_ones = window_sum;
        int swaps = total - max_ones;
        
        for (int i = 1; i < n; ++i) {
            window_sum += nums[i + total - 1] - nums[i - 1];
            max_ones = max(max_ones, window_sum);
            swaps = min(swaps, total - max_ones);
        }
        
        return swaps;
    }
};
