class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> result(n, -1);
        vector<pair<int, int>> starts(n);
        for (int i = 0; i < n; i++) {
            starts[i] = {intervals[i][0], i};
        }

        sort(starts.begin(), starts.end());

        for (int i = 0; i < n; i++){
            int lo = 0, hi = n - 1;
            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if (starts[mid].first >= intervals[i][1]) {
                    result[i] = starts[mid].second;
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
        }

        return result;
    }
};
