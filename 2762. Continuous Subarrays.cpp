class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long count = 0;
        int left = 0;
        int n = nums.size();

        deque<int> maxDeque, minDeque;
        for (int right = 0; right < n; ++right) {
            while (!maxDeque.empty() && nums[maxDeque.back()] <= nums[right]) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(right);

            while (!minDeque.empty() && nums[minDeque.back()] >= nums[right]) {
                minDeque.pop_back();
            }
            minDeque.push_back(right);

            while (nums[maxDeque.front()] - nums[minDeque.front()] > 2) {
                left++;
                if (maxDeque.front() < left) {
                    maxDeque.pop_front();
                }
                if (minDeque.front() < left) {
                    minDeque.pop_front();
                }
            }

            count += (right - left + 1);
        }

        return count;
    }
};
