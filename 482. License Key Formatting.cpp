class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = s.size(), cnt = 0;
        string ans = "";

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '-') continue;
            if (cnt > 0 && cnt % k == 0) ans.push_back('-');
            ans.push_back(toupper(s[i]));
            cnt++;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
