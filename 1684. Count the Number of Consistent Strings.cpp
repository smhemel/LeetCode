class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        set<char>v(allowed.begin(),allowed.end());

        for(auto it:words) {
            bool flag = true;

            for(auto ch:it) {
                if(v.find(ch) == v.end()) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }

        return ans;
    }
};
