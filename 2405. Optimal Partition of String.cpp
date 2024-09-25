class Solution {
public:
    int partitionString(string s) {
        vector<int> v(26, 0);
        int n = s.length(), ans = 1;
        for (int i = 0; i < n; i++) {
            int k = s[i] - 'a';
            if (v[k] != 0) {
                for (int j = 0; j < 26; j++) v[j] = 0;
                ans++, v[k] = 1;
            } else v[k] = 1;
        }

        return ans;
    }
};
