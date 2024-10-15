class Solution {
public:
    long long minimumSteps(string s) {
        int white = 0;
        long long int res = 0;
        int n = s.length();
        
        for (int j = 0; j < n; ++j) {
            if (s[j] == '0') {
                res += white;
            } else if (s[j] == '1') {
                white++;
            }
        }
        
        return res;
    }
};
