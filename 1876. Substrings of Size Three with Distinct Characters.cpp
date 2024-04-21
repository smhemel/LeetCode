class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        char a=s[0], b=s[1], c=s[2];
        int ans = 0;
        for(int i = 3; s[i]; i++) {
            if(a != b && b != c && c != a) ans++;
            a = b, b = c, c = s[i];
        }

        if(a != b && b != c && c != a) ans++;
        return ans;
    }
};
