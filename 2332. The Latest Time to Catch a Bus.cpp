class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());
        map<int, int> hash;
        int ans = 0, k = 0;
        for (int i = 0; i < buses.size(); i++) {
            int size = 0, a = 0;
            while (k < passengers.size() && size < capacity && passengers[k] <= buses[i]) {
                a = passengers[k] - 1;
                hash[passengers[k]]++;
                k++;
                size++;
            }
            if (size < capacity && a != buses[i] - 1) {
                ans = buses[i];
                continue;
            }
            while (a >= ans) {
                if (hash.find(a) == hash.end()) ans = max(ans, a);
                a--;
            }
        }

        return ans;
    }
};
