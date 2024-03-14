class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string comp1="", comp2="";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '#' && comp1.empty()) continue;
            if(s[i] == '#' && !comp1.empty()) comp1.pop_back();
            else comp1+=s[i];
        }

        for(int i = 0; i < t.length(); i++) {
            if(t[i]=='#' && comp2.empty()) continue;
            if(t[i]=='#' && !comp2.empty()) comp2.pop_back();
            else comp2+=t[i];
        }

        if(comp1 == comp2) return true;
        return false;
    }
};
