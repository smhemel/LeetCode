class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        map<char,int>M;

        for (int i=0; s[i]; i++) M[s[i]]++;

        for (int i=0; t[i]; i++) {
            if(M[t[i]] < 1) ans++;
            else M[t[i]]--;
        }

        return ans;
    }
};
