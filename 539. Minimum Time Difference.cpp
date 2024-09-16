class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>times;

        for(auto time: timePoints) {
            int hour = (time[0] - '0') * 10 + (time[1] - '0');
            int minute = (time[3] - '0') * 10 + (time[4] - '0');

            times.push_back(hour * 60 + minute);
        }

        sort(times.begin(), times.end());

        int minDiff = INT_MAX;
        for (int i = 0; i < times.size() - 1; i++) {
            minDiff = min(minDiff, times[i + 1] - times[i]);
        }

        minDiff = min(minDiff, 24 * 60 - times.back() + times.front());

        return minDiff;
    }
};
