class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int res = 0;

        for(int i =0; i<nums.size()-1; i++) {
            if(nums[i] > nums[i+1]){
                if(res == 0) res = -1;
                else if(res == 1) return false;
            } else if(nums[i] < nums[i+1]){
                if(res == 0) res = 1;
                else if(res == -1) return false;
            }
        }

        return true;
    }
};
