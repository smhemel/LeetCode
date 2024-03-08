class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for (int i=0; columnTitle[i]; i++) {
            int val = abs(abs('A' - columnTitle[i]) + 1);
            ans = ans*26+val;
        }

        return ans;
    }
};
