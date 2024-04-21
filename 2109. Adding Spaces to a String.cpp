class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int cnt = 0, index = 0;
        string ans = "";

        for (int i=0; s[i]; i++) {
            if (index < spaces.size()) {
                if (spaces[index] == i) {
                    ans += " ";
                    index++;
                }
            }
            ans += s[i];
        }

        return ans;
    }
};
