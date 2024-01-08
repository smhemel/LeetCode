class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (auto sentence: sentences) {
            int temp = 1;
            for (int i=0; sentence[i]; i++) if (sentence[i] == ' ') temp++;
            ans = max(ans,temp);
        }

        return ans;
    }
};
