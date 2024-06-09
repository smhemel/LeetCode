class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> sums(k, 0);
        int ans = 0, currSum = 0, n = nums.size();

        sums[0]++;
        for(int i = 0; i < n; i++) {
            currSum = (currSum + nums[i] % k + k) % k;
            ans += sums[currSum];
            sums[currSum]++;
        }

        return ans;
    }
};
