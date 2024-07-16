class Solution {
public:
    string sortVowels(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                temp += s[i];
            }
        }
        string ans = "";
        int p1 = 0;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                if (p1 < temp.length()) {
                    ans += temp[p1];
                    p1++;
                }
            } else ans += s[i];
        }

        return ans;
    }
};
