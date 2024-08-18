class Solution {
public:
    int nthUglyNumber(int n) {
        int t2 = 1, t3 = 1, t5 = 1;
        vector<int> ans(n + 1);
        ans[1] = 1;

        for (int i = 2; i <= n; i++) {
            int second = ans[t2] * 2, third = ans[t3] * 3, fifth = ans[t5] * 5;
            ans[i] = min({second, third, fifth});

            if (ans[i] == second) t2++;
            if (ans[i] == third) t3++;
            if (ans[i] == fifth) t5++;
        }

        return ans[n];
    }
};
