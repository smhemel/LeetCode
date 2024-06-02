class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        set<pair<int, int>> intervals;

        for (const auto& meeting : meetings) {
            int start = meeting[0];
            int end = meeting[1];
            intervals.insert({start, end});
        }

        vector<pair<int, int>> mergedIntervals;
        for (const auto& interval : intervals) {
            if (mergedIntervals.empty() || mergedIntervals.back().second < interval.first - 1) {
                mergedIntervals.push_back(interval);
            } else {
                mergedIntervals.back().second = max(mergedIntervals.back().second, interval.second);
            }
        }

        int busyDays = 0;
        for (const auto& interval : mergedIntervals) {
            busyDays += interval.second - interval.first + 1;
        }

        int freeDays = days - busyDays;

        return freeDays;
    }
};
