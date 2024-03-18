class Solution {
public:
    string finalString(string s) {
        string ans = "";
        for (auto c : s) {
            if(c == 'i') {
                if(ans.size()) reverse(ans.begin(), ans.end());
                
            } else ans += c;
        }

        return ans;
    }
};
