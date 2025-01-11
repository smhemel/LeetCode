class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char, int> M;
        int Single = 0;

        for (char c : s) {
            M[c]++;
        }

        for (auto &[ch, freq] : M) {
            if (freq % 2 == 1) {
                Single++;
            }
        }
        
        return (Single <= k && k <= s.size());
    }
};
