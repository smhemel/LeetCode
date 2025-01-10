class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int freq[26] = {};
        
        for (auto& word : words2) {
            int count[26] = {};

            for (char c : word) count[c - 'a']++;
            for (int i = 0; i < 26; i++) freq[i] = max(freq[i], count[i]);
        }

        vector<string> res;
        for (auto& word: words1) {
            int count[26] = {}, i;

            for (char c : word) count[c - 'a']++;
            for (i = 0; i < 26; i++)
                if (count[i] < freq[i]) break;

            if (i == 26) res.push_back(word);
        }

        return res;
    }
};
