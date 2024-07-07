class Solution {
public:
    int solve(int x, int k, int ans, int empty) {
        ans += x;
        empty += x;
        x = empty/k;
        empty -= (x*k);

        if (x == 0) {
            return ans;
        }

        return max(ans, solve(x,k,ans,empty));
    }
    int numWaterBottles(int numBottles, int numExchange) {
        return solve(numBottles, numExchange, 0, 0);
    }
};
