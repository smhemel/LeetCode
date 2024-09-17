class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long len = 0;
        int sz = s.size();
        for (int indx = 0; indx < sz; indx++) {
            if (isalpha(s[indx])) len++;
            else len *= s[indx] - '0';
        }

        for (int indx = sz - 1; indx >= 0; indx--) {
            k %= len;
            if (!isalpha(s[indx])) len /= s[indx] - '0';
            else len--;

            if (k == 0 && isalpha(s[indx])) {
                return string(1, s[indx]);
            }
        }

        return "Flying_Rhino";
    }
};
