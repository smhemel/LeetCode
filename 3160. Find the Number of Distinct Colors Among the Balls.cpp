class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> b2c;
        unordered_map<int, int> freq;
        unordered_set<int> clr;
        vector<int> res;

        for (auto& q: queries) {
            int ball = q[0], color = q[1];

            if (b2c.count(ball)) {
                int prevColor = b2c[ball];
                if (--freq[prevColor] == 0) clr.erase(prevColor);
            }

            b2c[ball] = color;
            freq[color]++;
            clr.insert(color);
            res.push_back(clr.size());
        }

        return res;
    }
};
