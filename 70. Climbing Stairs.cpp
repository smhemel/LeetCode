class Solution {
public:
    int climbStairs(int n) {
        unsigned long long int ans[100];
        ans[1] = 1;
        ans[2] = 2;
        for (int i=3; i<=50; i++) {
            ans[i] = ans[i-1]+ ans[i-2];
        }

        return ans[n];
    }
};
