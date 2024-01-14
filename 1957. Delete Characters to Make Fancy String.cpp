class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        if (s.length() < 3) return s;
        ans += s[0];
        ans += s[1];

        for (int i=2; s[i]; i++) {
            if(s[i-2] == s[i-1] && s[i-1] == s[i]) continue;
            else ans += s[i];
        }

        return ans;
    }
};
