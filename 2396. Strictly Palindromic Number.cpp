class Solution {
public:
    bool base(int n, int b) {
        string s = "";
        while (n > 0) {
            s += to_string(n % b);
            n /= b;
        }

        for (int i = 0, j = s.length() - 1; i <= j; i++, j--)
            if (s[i] != s[j]) return false;
            
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        bool res = base(n, 2);
        for (int i = 3; i <= n - 2; i++) {
            res = res && base(n, i);
        }

        return res;
    }
};
