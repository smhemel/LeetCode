class Solution {
public:
    bool isCircularSentence(string sentence) {
        stringstream s(sentence);
        string firstword, prevword, word;
        s >> firstword;
        prevword = firstword;

        while (s >> word) {
            if (prevword.back() != word.front()) {
                return false;
            }
            prevword = word;
        }

        return prevword.back() == firstword.front();
    }
};
