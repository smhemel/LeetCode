class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size(), ans = 0;
        vector<int> temp(heights.begin(), heights.end());

        sort(heights.begin(), heights.end());
        for (int i = 0; i < n; i++) ans += (heights[i] != temp[i]);

        return ans;
    }
};
