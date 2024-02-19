class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        auto lambda = [](int& n1, int& n2) {
            return (n1&1) < (n2&1);
        };
        sort(nums.begin(), nums.end(), lambda);
        
        return nums;
    }
};
