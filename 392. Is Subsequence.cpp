class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        if(s.length() == 0) return true;

        for(int i = 0; i < t.size(); i++) {
            if(s[j] == t[i]) j++;
            if(j == s.size()) return true;
        }  

        return false;
    }
};
