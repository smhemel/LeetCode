class Solution {
public:

    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'U' || ch == 'u') return true;

        return false;
    }

    bool halvesAreAlike(string s) {
        int cnt = 0;
        for (int i=0, j=s.length()-1; i<j; i++,j--) {
            if (isVowel(s[i])) cnt++;
            if (isVowel(s[j])) cnt--;
        }

        if (cnt == 0) return true;

        return false;
    }
};
