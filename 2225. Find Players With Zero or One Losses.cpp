class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> temp;
        int ar[200000];
        vector<vector<int>> ans;
        set<int> S,S1;
        memset(ar, 0, sizeof(ar));
        ans.push_back(temp);
        ans.push_back(temp);

        for (auto match: matches) {
            S.insert(match[0]);
            S1.insert(match[1]);
            ar[match[1]]++;
        }

        for(auto val: S) {
            if (ar[val] == 0) ans[0].push_back(val);
        }

        for (auto val: S1) {
            if (ar[val] == 1) ans[1].push_back(val);
        }

        return ans;
    }
};
