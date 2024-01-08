class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0, cnt = 0;
        for (int i=0; s[i]; i++) {
            if (s[i] == 'R') cnt++;
            if (s[i] == 'L') cnt--;

            if (cnt == 0) ans++;
        }

        return ans;
    }
};
