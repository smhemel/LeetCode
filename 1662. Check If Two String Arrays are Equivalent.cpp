class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str = "", str1 = "";

        for (auto word: word1) str += word;
        for (auto word: word2) str1 += word;

        if (str.length() != str1.length()) return false;

        for (int i=0; str[i]; i++) {
            if (str[i] != str1[i]) return false;
        }

        return true;
    }
};
