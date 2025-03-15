class Solution {
public:
    inline static bool f(vector<int>& nums, int n, int k, int cap) {
        int steal = 0;
        for (int i = 0; i < n && steal < k; i++) {
            if (nums[i] <= cap) {
                steal++;
                i++;
            }
        }

        return steal >= k;
    }

    static int minCapability(vector<int>& nums, int k) {
        const int n = nums.size();
        auto [min, max] = minmax_element(nums.begin(), nums.end());
        int l = *min, r = *max, m;

        while (l < r) {
            m = (l + r) / 2;
            if (f(nums, n, k, m)) r = m;
            else l = m + 1;
        }

        return l;
    }
};
