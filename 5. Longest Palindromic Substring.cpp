class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int sum = 0;

        if (s.length() == 1) return s;

        for (int i = 0; i < s.length(); i++) {
            int l = i, r = i;

            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                if (r - l + 1 > sum) {
                    sum = r - l + 1;
                    ans = s.substr(l, sum);
                }

                l--, r++;
            }
            
            l = i, r = i+1;
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                if (r - l + 1 > sum) {
                    sum = r - l + 1;
                    ans = s.substr(l, sum);
                }

                l--, r++;
            }
        }

        return ans; 
    }
};
