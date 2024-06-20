class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size(), l = 0, r = 1e9;
        sort(position.begin(), position.end());

        int ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (isValid(mid, position) >= m) {
                l = mid + 1;
                ans = max(ans, mid);
            } else r = mid - 1;
        }

        return ans;
    }

    int isValid(int mid, vector<int> position) {
        int total = 1;
        int curDist = position[0];
        
        for (int i = 1; i < position.size(); i++) {
            if (position[i] - curDist >= mid) {
                total++;
                curDist = position[i];
            }
        }

        return total;
    }
};
