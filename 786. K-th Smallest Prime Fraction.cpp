class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        double left = 0, right = 1, mid;
        vector<int> ans;

        while (left <= right) {
            mid = left + (right - left) / 2;
            int j = 1, total = 0, num = 0, den = 0;
            double maxFrac = 0;
            for (int i = 0; i < n; i++) {
                while (j < n && arr[i] >= arr[j] * mid) j++;
                
                total += n - j;

                if (j < n && maxFrac < arr[i] * 1.0 / arr[j]) {
                    maxFrac = arr[i] * 1.0 / arr[j];
                    num = i, den = j;
                }
            }

            if (total == k) {
                ans = {arr[num], arr[den]};
                break;
            }

            total > k ? right = mid : left = mid;
        }

        return ans;
    }
};
