class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0 , n = nums.size();
        for (int i = 0 ; i < n - 2  ; i++) {
            if (nums[i] == 0) {
                cnt++;
                nums[i+1] ^= 1 ^ 0;
                nums[i+2] ^= 1 ^ 0;
            }
        }
        
        return nums[n - 1] && nums[n - 2] ? cnt : -1;
    }
};
