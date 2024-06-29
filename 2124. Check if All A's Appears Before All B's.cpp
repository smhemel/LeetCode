class Solution {
public:
    bool checkString(string s) {
        bool isA = false;

        for (int i=s.length()-1; i>=0; i--) {
            if (s[i] == 'b' && isA) return false;
            else if (s[i] == 'a') isA = true;
        }

        return true;
    }
};
