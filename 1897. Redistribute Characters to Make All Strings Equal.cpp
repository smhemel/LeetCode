class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<int,int>M;
        if (words.size() == 1) return true;

        for (auto str: words) {
            for (int i=0; str[i]; i++) {
                M[str[i] - 97]++;
            }
        }

        for (int i=0; i<26; i++) {
            if (M[i] != 0) {
                if (M[i]%words.size() != 0) {
                    return false;
                }
            }
        }

        return true;
    }
};
