class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> v1(26, -1);
        vector<int> v2(26, -1);
        int ans = -1;

        for (int i = 0; i < s.size(); ++i) {
            int temp = s[i] - 'a';

            if (v1[temp] == -1) {
                v1[temp] = i;
            } else {
                v2[temp] = i;
                ans = max(ans, v2[temp] - v1[temp] - 1);
            }
        }

        return ans;
    }
};
