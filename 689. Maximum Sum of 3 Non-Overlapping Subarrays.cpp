class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sums(n - k + 1, 0);
        vector<int> left(n - k + 1, 0);
        vector<int> right(n - k + 1, 0);
        
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (i >= k - 1) {
                sums[i - k + 1] = sum;
                sum -= nums[i - k + 1];
            }
        }
        
        int best = 0;
        for (int i = 0; i < sums.size(); i++) {
            if (sums[i] > sums[best]) {
                best = i;
            }
            left[i] = best;
        }
        
        best = sums.size() - 1;
        for (int i = sums.size() - 1; i > 0; i--) {
            if (sums[i] >= sums[best]) {
                best = i;
            }
            right[i] = best;
        }
        
        vector<int> result(3, 0);
        int maxSum = 0;
        for (int i = k; i < sums.size() - k; i++) {
            int leftIdx = left[i - k];
            int rightIdx = right[i + k];
            int total = sums[leftIdx] + sums[i] + sums[rightIdx];
            if (total > maxSum) {
                maxSum = total;
                result = {leftIdx, i, rightIdx};
            }
        }
        
        return result;
    }
};
