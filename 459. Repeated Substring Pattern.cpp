class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = 0, i = 1, n = s.size();
        vector<int> lps(n, 0);

        while (i < n) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) len = lps[len - 1];
                else lps[i] = 0, i++;
            }
        }
        
        int patternLength = lps[n - 1];

        return patternLength > 0 && n % (n - patternLength) == 0;
    }
};
