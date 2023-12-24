class Solution {
public:
    int minOperations(string s) {
        int ans = 9999999, cnt = 0;
        for (int i=0; s[i]; i++) {
            if(i%2 == 0 && s[i] != '0') {
                cnt++;
            } else if (i%2 != 0 && s[i] != '1') {
                cnt++;
            }
        }

        ans = min(ans, cnt);
        cnt = 0;

        for (int i=0; s[i]; i++) {
            if(i%2 == 0 && s[i] != '1') {
                cnt++;
            } else if (i%2 != 0 && s[i] != '0') {
                cnt++;
            }
        }

        ans = min(ans, cnt);
        return ans;
    }
};
