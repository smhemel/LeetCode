class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long int> prefixMax(n, 0);
        prefixMax[0] = nums[0];

        for (int i = 1; i < n; i++) {
            int temp = prefixMax[i - 1];
            prefixMax[i] = max(temp, nums[i]);
        }
        for (int i = 0; i < n; i++) {
            int sum = nums[i] + prefixMax[i];
            prefixMax[i] = sum;
        }
        for (int i = 1; i < n; i++) {
            prefixMax[i] = prefixMax[i] + prefixMax[i - 1];
        }
        return prefixMax;
    }
};
