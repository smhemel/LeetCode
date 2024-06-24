class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> v1, v2;
        for (auto num : nums) {
            if (num % 2 == 0) v2.push_back(num);
            else v1.push_back(num);
        }
        int l1 = 0, l2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) nums[i] = v2[l2++];
            else nums[i] = v1[l1++];
        }

        return nums;
    }
};
