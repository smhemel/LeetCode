class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();
        unordered_set<string>numSet(nums.begin(), nums.end());
        
        string ans = "";

        function<void(string)> generateBinary = [&](string binary) {
            if (binary.size() == n) {
                if (numSet.find(binary) == numSet.end()) {
                    ans = binary;
                }
                return;
            }
            if (!ans.empty()) return;
            generateBinary(binary + '0');
            generateBinary(binary + '1');
        };

        generateBinary("");
        
        return ans;
    }
};
