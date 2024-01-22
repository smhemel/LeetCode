class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int start = 0, end=nums.size()-1, ans = 0;
        while(start < end) {
            if((nums[start]+nums[end]) < target) {
                ans += end-start;
                start++;
            }
            else end--;
        } 

        return ans;
    }
};
