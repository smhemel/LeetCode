class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int idx = 1, start = 0;

        for (int i = 0; i <= sentence.size(); i++){
            if (sentence[i] == ' ' || i == sentence.size()){
                string prefix = sentence.substr(start, searchWord.size());
                if (searchWord == prefix) return idx;
                start = 1 + i;
                idx++;
            }
        }

        return -1;
    }
};
