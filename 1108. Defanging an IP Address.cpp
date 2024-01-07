class Solution {
public:
    string defangIPaddr(string s) {
        string ans = "";

        for (int i=0; s[i]; i++) {
            if (s[i] == '.') ans.append("[.]");
            else ans += s[i];
        }

        return ans;
    }
};
