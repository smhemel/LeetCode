class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int count = 0, x = -1;
        int n = nums.size();

        for (auto it: nums) {
            if (count == 0) x = it;
            count += (it == x) ? 1 : -1;
        }

        count = 0;
        for (auto it: nums)
            if (it == x) count++;

        int ans = -1;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) cnt++;
            int left = count - cnt;

            if (cnt > ((i + 1) / 2) && left > ((n - i - 1) / 2)) {
                return i;
            }
        }
        
        return -1;
    }
};
