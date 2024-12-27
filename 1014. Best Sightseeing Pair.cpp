class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        vector<int> leftMax(n), rightMax(n);

        leftMax[0] = values[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], values[i] + i);
        }

        rightMax[n - 1] = values[n - 1] - (n - 1);
        for (int i = n - 2; i > 0; i--) {
            rightMax[i] = max(rightMax[i + 1], values[i] - i);
        }

        int maxi = 0;
        for (int i = 1; i < n; i++) {
            maxi = max(maxi, leftMax[i - 1] + rightMax[i]);
        }

        return maxi;
    }
};
