class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.reserve(nums.size() * 2);
        copy(nums.begin(), nums.end(), back_inserter(nums));
        
        return nums;
    }
};
