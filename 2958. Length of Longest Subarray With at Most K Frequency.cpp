class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0, n = size(nums);
        unordered_map<int,int>mp;

        for(int l = 0, r = 0; r < n; r++) {
            mp[nums[r]]++;

            if(mp[nums[r]] > k) {
                while(nums[l] != nums[r]) {
                    mp[nums[l]]--;
                    l++;
                }

                mp[nums[l]]--;
                l++;
            }

            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
