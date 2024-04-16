class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);

        if (k > 0) {
            for (int i = 0; i < n; i++) {
                int sum = 0, j = i + 1, temp = 0;
                while (temp++ != k)
                    sum += code[j++ % n];
                ans[i] = sum;
            }
        } else if (k < 0) {
            for (int i = 0; i < n; i++) {
                int sum = 0, j = i + k + n, temp = k;
                while (temp++ != 0)
                    sum += code[j++ % n];
                ans[i] = sum;
            }
        }

        return ans;
    }
};
