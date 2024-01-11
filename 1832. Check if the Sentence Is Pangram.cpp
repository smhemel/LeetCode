class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;

        for(int i = 0 ; sentence[i]; i++) s.insert(sentence[i]);
        if (s.size() == 26) return true;

        return false;
    }
};
