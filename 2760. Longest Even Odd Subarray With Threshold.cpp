class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int left = 0, right = 1, ans = 0, cnt = 0, numsLen = nums.size();

        if (numsLen == 1 && (nums[0]%2 == 1 || nums[0] > threshold)) return 0;

        while(left < numsLen) {
            if (nums[left]%2 == 0 && nums[left] <= threshold) {
                bool f = false;
                while(right < numsLen) {
                    if (nums[right] <= threshold) {
                        if (nums[right]%2 == 1 && !f) {
                            right++;
                            f = true;
                        } else if (nums[right]%2 == 0 && f) {
                            right++;
                            f = false;
                        } else break;
                    } else break;
                }

                ans = max(ans,right-left);
                right++;
                left = right-1;
            } else {
                left++;
                right++;
            }
        }

        return ans;
    }
};
