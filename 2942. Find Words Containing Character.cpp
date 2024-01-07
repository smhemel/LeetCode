class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;

        for (int i=0; i<words.size(); i++) {
            size_t found = words[i].find(x);
            if (found!=string::npos) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
