class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        int count = 0;
        for(int i=1; i<=s.length(); i++) {
            if(s[i] == s[i-1]) count++;
            else {
                if(count >= 2) ans.push_back({i-count-1,i-1});
                count = 0;
            }
        }

        return ans;
    }
};
