class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = nums[0], mn = nums[0];
        
        for (int a: A)
            mx = max(mx, a), mn = min(mn, a);

        return max(0, mx - mn - 2 * K);
    }
};
