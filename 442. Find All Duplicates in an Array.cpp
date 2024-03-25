class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int mark[211111];
        memset(mark, 0, sizeof(mark));
        vector<int>ans;

        for (auto x: nums) {
            if (mark[x] == 1) {
                ans.push_back(x);
                mark[x]++;
            } else mark[x]++;
        }

        return ans;
    }
};
