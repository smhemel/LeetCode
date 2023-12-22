class Solution {
public:
    int maxScore(string s) {
        int zero = 0, one = 0, ans = 0;
        if (s[0] == '0') zero++;
        for (int i=1; s[i]; i++) {
            if (s[i] == '1') one++;
        }

        ans = max(ans, zero+one);
        for (int i=1; i<s.length()-1; i++) {
            if (s[i] == '1') one--;
            if (s[i] == '0') zero++;

            ans = max(ans, one+zero);
        }

        return ans;
    }
};
