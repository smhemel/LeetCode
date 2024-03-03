class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> one, two,ans;
        
        if (nums.size() == 1) return nums;
        
        one.push_back(nums[0]);
        two.push_back(nums[1]);
        int index = 0,index1 = 0;
        
        for (int i=2; i<nums.size(); i++) {
            if (one[index] >two[index1]){
                one.push_back(nums[i]);
                index++;
            }
            else {
                two.push_back(nums[i]);
                index1++;
            }
        }
        
        for (auto val: one) ans.push_back(val);
        for (auto val: two) ans.push_back(val);
        return ans;
    }
};
