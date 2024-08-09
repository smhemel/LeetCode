class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        int n = p.size(), cur = p[0];
        vector<int> result(n, cur);
        for(int i = 1; i < n; i++)
            result[i] = cur ^ p[i], cur = p[i];

        return result;
    }
};
