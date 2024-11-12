class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int>maxNum;
        int m = queries.size();

        sort(items.begin(), items.end());

        for (auto x: items) {
            if (maxNum.size() == 0)
                maxNum.push_back(x[1]);
            else 
                maxNum.push_back(max(maxNum.back(), x[1]));
        }

        vector<int> ans(m);
        for (int i = 0; i < m; i++) {
            int query = queries[i];

            vector<int>&& target={query, INT_MAX};

            int j = upper_bound(items.begin(), items.end(), target)-items.begin();

            if (j == 0) ans[i] = 0;
            else ans[i] = maxNum[j - 1];
        }

        return ans;


        return {0};
    }
};
