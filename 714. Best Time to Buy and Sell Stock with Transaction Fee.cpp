class Solution {
    int free[50000], hold[50000];
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        hold[0] = -prices[0];
        free[0] = 0;

        for (int i=1; i<n; i++) {
            hold[i] = max(hold[i-1], free[i-1]-prices[i]);
            free[i] = max(free[i-1], hold[i-1]+prices[i] - fee);
        }

        return free[n-1];
    }
};
