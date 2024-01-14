class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        s += s;
        if (s.find(goal) < s.size()) return true;

        return false;
    }
};
