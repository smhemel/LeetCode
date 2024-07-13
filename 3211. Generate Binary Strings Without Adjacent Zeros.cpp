class Solution {
    void backtrack(int index, bool flag, string& s, vector<string>& res){
        if (index == s.length()) {
            res.push_back(s);
            return;
        }
        if (!flag) backtrack(index + 1, true, s, res);
        s[index] = '1';
        backtrack(index + 1, false, s, res);
        s[index] = '0';
    }
public:
    vector<string> validStrings(int n) {
        vector<string> res;
        string s(n, '0');
        backtrack(0, false, s, res);
        return res;
    }
};
