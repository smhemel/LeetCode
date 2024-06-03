class Solution {
public:
    int appendCharacters(string s, string t) {
        int j = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] == t[j]) j++;
            if (j == t.length()) return 0;
        }

        return t.length() - j;
    }
};
