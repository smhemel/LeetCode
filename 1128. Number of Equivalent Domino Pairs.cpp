class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            map<pair<int, int>, int> mpp;
            int count = 0;

            for(auto& d: dominoes) {
                if(d[0] > d[1]) swap(d[0], d[1]);
                count += mpp[make_pair(d[0], d[1])]++;
            }

            return count;
        }
};
