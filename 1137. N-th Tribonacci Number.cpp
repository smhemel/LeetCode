class Solution {
public:
    int helper(int n, std::unordered_map<int, int>& memo) {
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }

        int result;
        if (n == 0) {
            result = 0;
        } else if (n == 1 || n == 2) {
            result = 1;
        } else {
            result = helper(n - 1, memo) + helper(n - 2, memo) + helper(n - 3, memo);
        }

        memo[n] = result;
        return result;
    }

    int tribonacci(int n) {
        unordered_map<int, int> memo;
        return helper(n, memo);
    }
};
