class Solution {
public:
    int longestPalindrome(string s) {
        set<char> distinctChar;
        map<char,int> P;
        for (int i=0; s[i]; i++) {
            distinctChar.insert(s[i]);
            P[s[i]]++;
        }
        int ans = 0;
        bool f = false;
        for (auto el: distinctChar) {
            if (P[el]%2 == 0) {
                ans += P[el];
            } else if (P[el]&1) {
                f = true;
                if ((P[el]-1)%2 == 0) ans += (P[el]-1);
            }
        }

        if(f) ans++;

        return ans;
    }
};
